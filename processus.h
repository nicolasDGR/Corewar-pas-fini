/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 13:35:23 by avannest          #+#    #+#             */
/*   Updated: 2014/01/29 06:01:14 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESSUS_H
# define PROCESSUS_H

# include "op.h"

# define SIZE_BUF 128

typedef struct s_processus	t_processus;

struct						s_processus
{
	//char					reg[REG_NUMBER][REG_SIZE];
	int						reg[REG_NUMBER];
	//char					pc[REG_SIZE];
	int						pc;
	int						carry;
	int						live;
	t_processus				*next;
};

/*
** Creation
*/
t_processus	*processus_new(int player_nb, int pc);
int			processus_add(int player_nb, int pc);
void		processus_push(t_processus *pr);
int			processus_create(int player_nb, int loc, int fd);

/*
** Deletion
*/
void		processus_del_one(t_processus **pr);
void		processus_free_all(t_processus **pr);

/*
** Misc
*/
void		print_registers(t_processus *pr);
void		print_processus(t_processus *pr);
void		print_processus_list(t_processus *pr);

#endif /* !PROCESSUS_H */

