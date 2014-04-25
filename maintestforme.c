/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestforme.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:33:49 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/02 20:13:49 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"
#include <unistd.h>

/*
** It's the main-test's DGR to read a or more file(s) binary for this instant
** and to verify the argument's type
*/

int		main(int ac, char **av)
{
	t_processus	*process;
	int				error;
	int				i;
	char			type[4];

	get_arg_type(78, type, 4);
	write(1, type, 4);
	if (ac < 2)
	{
		ft_putendl("Missing argument");
		return (-1);
	}
	i = 1;
	process = (t_processus *)malloc(sizeof(process));
	while (av[i])
	{
		error = read_binary(av[i], process);
		i++;
	}
	if (error == -1)
		return (-1);
	return (0);
}
