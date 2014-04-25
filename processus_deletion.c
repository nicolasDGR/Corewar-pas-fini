/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processus_deletion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 03:24:21 by avannest          #+#    #+#             */
/*   Updated: 2014/01/29 05:33:52 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "processus.h"

void		processus_del_one(t_processus **pr)
{
	t_processus		*tmp;

	tmp = (*pr)->next;
	free(*pr);
	*pr = tmp;
}

void		processus_free_all(t_processus **pr)
{
	while (*pr != pr->next)
	{
		processus_del_one(pr);
	}
	processus_del_one(pr);
	*pr = NULL;
}

