/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngolovin <ngolovin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:38:43 by ngolovin          #+#    #+#             */
/*   Updated: 2014/01/29 05:31:37 by ngolovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

/*
** T_REG = T_REG + T_REG
*/
void				sub(int *av, char *at)
{
	processus_list->reg[av[2]] = processus_list->reg[av[0]]
								- processus_list->reg[av[1]];
}

/*
** T_REG = (T_REG | T_DIR | T_IND & (AND) T_REG | T_IND | T_DIR)
*/
void				and(int *av, char *at)
{
	int			i;

	i = 0;
	while (and_tab[i].c != '\0')
	{
		if (at[i] == and_tab[i].c && at[1] == and_tab[i].d)
			processus_list->reg[av[2]] = and_tab[i].reg;
		++i;
	}
}

/*
** T_REG = (T_REG | T_DIR | T_IND "|" (OR) T_REG | T_IND | T_DIR)
*/
void				or(int *av, char *at)
{
	int			i;

	i = 0;
	while (or_tab[i].c != '\0')
	{
		if (at[i] == or_tab[i].c && at[1] == or_tab[i].d)
			processus_list->reg[av[2]] = or_tab[i].reg;
		++i;
	}
}

/*
** T_REG = (T_REG | T_DIR | T_IND "^" (XOR) T_REG | T_IND | T_DIR)
*/
void				xor(int *av, char *at)
{
	int			i;

	i = 0;
	while (xor_tab[i].c != '\0')
	{
		if (at[i] == xor_tab[i].c && at[1] == xor_tab[i].d)
			processus_list->reg[av[2]] = xor_tab[i].reg;
		++i;
	}
}

/*
** Modify PC
*/
void				zjmp(int *av, char *at)
{

}
