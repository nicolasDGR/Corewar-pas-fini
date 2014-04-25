/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:10:25 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:56:22 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str != (char)c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return ((char *)str);
}
