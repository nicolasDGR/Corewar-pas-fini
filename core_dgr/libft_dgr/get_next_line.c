/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 12:48:54 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/01/04 14:12:00 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		get_next_line(int const fd, char **line)
{
	static char	*buffer = NULL;
	char		*nextn;
	long		rd;
	long		len;

	len = (buffer) ? ft_strlen(buffer) : 0;
	if (!(nextn = ft_memchr(buffer, '\n', len)))
	{
		buffer = ft_realloc(buffer, len + 1, len + BUFF_SIZE + 1);
		while (((rd = read(fd, buffer + len, BUFF_SIZE)) > 0)
				&& !(nextn = ft_memchr(buffer, '\n', len + rd)))
		{
			len += rd;
			buffer = ft_realloc(buffer, len + 1, len + BUFF_SIZE + 1);
		}
		len += rd;
		if (rd <= 0 && len <= 0)
			return ((rd == 0) ? 0 : -1);
	}
	*line = (nextn) ? ft_strsub(buffer, 0, nextn - buffer) : ft_strdup(buffer);
	len = len + 1 - (nextn - buffer);
	nextn = (nextn) ? ft_strndup(nextn + 1, len - 1) : NULL;
	free(buffer);
	buffer = nextn;
	return (1);
}
