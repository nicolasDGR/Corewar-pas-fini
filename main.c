/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelhadj <ebelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 13:33:44 by ebelhadj          #+#    #+#             */
/*   Updated: 2014/01/29 05:34:02 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "processus.h"
#include "corewar.h"
#include "op.h"
#include <fcntl.h>

void			mem_init(void)
{
	int			i;

	i = 0;
	while (i < MEM_SIZE)
		mem[i++] = 0;
}

void			process_list_init(int argc, char **argv)
{
	int			i;
	int			fd;

	i = 1;
    while (i < argc)
    {
        fd = open(argv[i], O_RDONLY);
        processus_create(i , mem[i * MEM_SIZE/(argc - 1)], fd);
        close (fd);
        i++;
    }
}

/*
** Suppress dead processus.
** Returns the number of lives executed since last check.
** Uses a copy of the pointer to the global processus_list.
*/
int				life_check(void)
{
	int			live_count;
	t_processus	*pr_list;

	live_count = 0;
	pr_list = processus_list;
	while (pr_list != processus_list)
	{
		if (processus_list->live > 0)
		{
			live_count += processus_list->live;
			processus_list->live = 0;
			processus_list = processus_list->next;
		}
		else
			processus_del_one(processus_list);
	}
	return (live_count);
}

int				main(int argc, char **argv)
{
	int			check_count;
	int			cycle_to_die;

	cycle_to_die = CYCLE_TO_DIE;
	mem_init();
	process_list_init(argc - 1, argv);
	while (check_count < MAX_CHECKS)
	{
		while (CYCLE_TO_DIE)
		{
	//		process_exec();
		}
		life_check(processus_list);
		++check_count;
	}
	return (0);
}

