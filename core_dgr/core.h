/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 14:04:15 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/02 17:27:42 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# include "../processus.h"
# include "../corewar.h"
# include "../op.h"
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

/*void	get_next_instruction(t_processus process);
*/
void	get_arg_type(int coding_byte, t_instruction instruct, int index);
void	get_arguments(int coding_instruct, t_instruction instruct, int index);
int		check_filecore(char *file);
int		check_read_and_free(char *file, int ret, char **join, char **buf);

#endif /* !CORE_H */
