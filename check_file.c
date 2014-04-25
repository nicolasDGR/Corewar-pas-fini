/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 16:58:24 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/02 17:40:21 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

/*
** To check if we have a file ".core"
** with the flag CORE_EXEC_MAGIC to be able to execute
*/

int		check_exe_magic(char *hex_str)
{
	int	hex_int;

	(void)hex_str;
	if (hex_int != COREWAR_EXEC_MAGIC)
	{
		ft_putendl("error : the champion isn't able to be executed");
		return (-1);
	}
	return (0);
}

/*
** To check if the file is read and to free the variables
*/

int		check_read_and_free(char *file, int ret, char **join, char **buf)
{
	(void)file;
	free(*buf);
	ft_putendl(*join);
	if (ret == -1)
	{
		ft_putendl("Error read asm");
		return (-1);
	}
	free(*join);
	return (0);
}

/*
** To check if the file is open
*/

int		check_open(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putendl("error : open file");
		return (-1);
	}
	return (fd);
}

/*
** To check if we have a extension file ".core"
*/

int		check_filecore(char *file)
{
	int		i;
	int		j;
	int		fd;
	char	*require;
	char	*file_ext;

	i = 0;
	j = 0;
	require = "cor";
	file_ext = (char *)malloc(sizeof(char) * ft_strlen(require));
	while (file[i] != '.')
		i++;
	i++;
	while (file[i])
	{
		file_ext[j] = file[i];
		i++;
		j++;
	}
	if (ft_strcmp(require, file_ext) != 0)
		ft_putendl("error : extension file");
	if ((fd = check_open(file)) == -1)
		return (-1);
	return (fd);
}
