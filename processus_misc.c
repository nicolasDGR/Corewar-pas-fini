/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processus_misc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/29 05:30:31 by avannest          #+#    #+#             */
/*   Updated: 2014/01/29 06:00:36 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "processus.h"

void		print_registers(t_processus *pr)
{
	int		i;

	i = 0;
	while (i < REG_NUMBER)
	{
		ft_putnbr(i + 1);
		write(1, ": ", 2);
		ft_putnbr(reg[i]);
		write(1, "\n", 1);
		++i;
	}
}

void		print_processus(t_processus *pr)
{
	if (pr == NULL)
		write(1, "(null)", 6);
	else
	{
		write(1, "Processus:\n", 11);
		write(1, "Registers:\n", 11);
		print_registers(pr);
		write(1, "PC: ", 4);
		ft_putnbr(pr->pc);
		write(1, "\ncarry: ", 7);
		ft_putnbr(pr->pc);
		write(1, "\nlive: ", 6);
		ft_putnbr(pr->pc);
		write(1, "\n", 1);
	}
}

void		print_processus_list(t_processus *pr)
{
	t_processus	*tmp;

	if (pr == NULL)
		write(1, "(null)", 6);
	else if (pr == pr->next)
		print_processus(pr);
	else
	{
		tmp = pr;
		while (pr->next != tmp)
		{
			print_processus(pr);
		}
	}
}

