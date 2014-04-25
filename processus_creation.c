/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processus_creation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 14:15:45 by avannest          #+#    #+#             */
/*   Updated: 2014/01/29 05:24:18 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"
#include "processus.h"
#include "register.h"
#include <stdlib.h>

/*
** Initialise et retourne un pointeur sur un processus noucellement cree.
*/
t_processus	*processus_new(int player_nb, int pc)
{
	int			i;
	t_processus	*pr;

	if (!(pr = (t_processus *)malloc(sizeof(t_processus))))
		return (0);
	pr->reg[0] = player_nb;
	i = 1;
	while (i < REG_NUMBER)
	{
		pr->reg[i] = 0;
		++i;
	}
	pr->pc = pc;
	pr->carry = 0;
	pr->live = 0;
	return (pr);
}

/*
** Cree un processus a partir d'un pc et l'ajoute a la liste.
*/
int			processus_add(int player_nb, int pc)
{
	t_processus	*pr;

	if (!(pr = processus_new(player_nb, pc)))
		return (0);
	processus_push(pr);
	return (1);
}

/*
** Le processus est insere au sommet de la liste.
** Il devient donc immediatement le processus actif.
*/
void		processus_push(t_processus *pr)
{
	if (!processus_list)
		processus_list = pr;
	else
	{
		pr->next = processus_list->next;
		processus_list->next = pr;
		processus_list = pr;
	}
}

/*
** Cree le processus, dans la liste et en memoire.
** A utiliser a la creation des champions.
*/
int			processus_create(int player_nb, int loc, int fd)
{
	int		ret;
	char	*buf;

	if (!(processus_add(player_nb, loc)))
		return (0);
	while ((ret = read(fd, mem + loc, SIZE_BUF)) > 0)
	{
		loc += ret;
	}
	return (loc);
}

