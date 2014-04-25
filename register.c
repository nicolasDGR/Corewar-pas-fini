/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   register.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 18:33:39 by avannest          #+#    #+#             */
/*   Updated: 2014/01/08 19:06:24 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

void		affect(char *reg, int val)
{
	((int *)reg)[REG_SIZE - sizeof(int)] = val;
}

int			get(char *reg)
{
	return (((int *)reg)[REG_SIZE - sizeof(int)]);
}

