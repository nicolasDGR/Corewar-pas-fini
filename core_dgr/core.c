/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 20:45:44 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/02 16:49:00 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"
#include <string.h>
/*
** Functions's table to launch the functions in c
*/

/*
const t_ft_op	g_ft_op[16] =
{
	{"live", live},
	{"ld", ld},
	{"st", st},
	{"add", add},
	{"sub", sub},
	{"and", and},
	{"or", or},
	{"xor", xor},
	{"zjump", zjump},
	{"ldi", ldi},
	{"sti", sti},
	{"fork", fork},
	{"lld", lld},
	{"lldi", lldi},
	{"lfork", lfork},
	{"aff", aff}
};
*/

/*
** Arguments
*/

/*
void	get_arguments(int coding_instruct, t_instruction *instruct, int index)
{
	if (instruct->type[i] = 'r')
		get_arguments(coding_byte, instruct->arg, index - 1);
}
*/

/*
** Type arguments
*/

/*
void	get_arg_type(int coding_byte, t_instruction *instruct, int index)
{
	if (index > 0)
		get_arg_type(coding_byte / 4, instruct->type, index - 1);
	coding_byte -= (coding_byte / 4) * 4;
	if (coding_byte / 2)
	{
		if (coding_byte % 2)
			instruct->type[index] = 'i';
		else
			instruct->type[index] = 'd';
	}
	else if (coding_byte % 2)
		instruct->type[index] = 'r';
	else
		instruct->type[index] = 0;
}
*/

/*
** Code's exemple, it's about what I think...
*/

/*
void	give_instruction(t_instruction *instruct)
{
	int		i;

	i = 0;
	while (i < 17)
	{
		if (ft_strcmp(op_tab[i].command, g_ft_op[i].command) == 0)
			g_ft_op[i].func(instruct.arg, instruct.type);
		i++;
	}
}
*/

/*
**
*/

/*
** To read a file binary
*/

int		read_binary(char *file, t_processus *process)
{
	int				ret;
	char			*buf;
	char			*join;
	t_int_read		*init;

	join = "";
	buf = NULL;
	init = (t_int_read *)malloc(sizeof(t_int_read *));
	if ((init->fd = check_filecore(file)) == -1)
		return (-1);
	buf = (char *)malloc(sizeof(char) * BUFFSIZE);
	while ((ret = read(init->fd, buf, BUFFSIZE)) > 0)
	{
		init->len += ret;
		buf = ft_realloc(buf, init->len + 1, init->len + BUFF_SIZE + 1);
		join = ft_strjoin(join, buf);
		init->i++;
	}
	get_next_instruction(join, process);
	if (check_read_and_free(file, ret, &join, &buf) == -1)
		return (-1);
	return (0);
}

/*
** Here, this is the little bullshit but I keep this code for later
*/

/*
void	function_of_shit(void)
{
	size_t	size_pc;

	type = (char*)malloc(MAX_ARGS_NUMBER);
	get_arg_type(coding_byte, type, MAX_ARGS_NUMBER);
	size_pc = ft_strlen(process.pc);
	while(*pc)
	{
		i = i + size_pc;
	}
}
*/

/*
** It's my main-test to read a or more file(s) binary for this instant
*/

int	main(int ac, char **av)
{
	t_processus	*process;
	int				error;
	int				i;
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
