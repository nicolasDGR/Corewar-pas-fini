/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 14:04:15 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/02 20:22:31 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# include "processus.h"
# include "corewar.h"
# include "op.h"
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>
# include "libft_dgr/includes/libft.h"

# define BUFFSIZE 1

typedef struct	s_int_read
{
	int			i;
	int			len;
	int			fd;
}				t_int_read;

typedef struct	s_instruction
{
	int			*arg;
	char		*type;
}				t_instruction;

typedef void (*t_func)(int *av, char *at);

typedef struct	s_ft_op
{
	char		*command;
	t_func		func;
}				t_ft_op;

typedef struct	s_op
{
	char		*command;
	int		nbr_arg;
	int		type_arg[4];
	int		opcode;
	int		cycle;
	char		*description;
	int		codage_byte;
	int		carry;
}				t_op;

extern t_op	op_tab[17];

/*
** Prototype for the DGR's functions
*/

void	get_arg_type(int coding_byte, t_instruction instruct, int index);
void	get_arguments(int coding_instruct, t_instruction instruct, int index);
int		check_filecore(char *file);
int		check_read_and_free(char *file, int ret, char **join, char **buf);

/*
** Protoype for the Niko's functions
*/

void	live(int *av, char *at);
void	ld(int *av, char *at);
void	st(int *av, char *at);
void	add(int *av, char *at);
void	sub(int *av, char *at);
void	and(int *av, char *at);
void	or(int *av, char *at);
void	xor(int *av, char *at);
void	zjump(int *av, char *at);
void	ldi(int *av, char *at);
void	sti(int *av, char *at);
void	fork(int *av, char *at);
void	lld(int *av, char *at);
void	lfork(int *av, char *at);
void	aff(int *av, char *at);

#endif /* !CORE_H */
