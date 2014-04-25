/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:24:50 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:00:09 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		ldst;
	size_t		lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (ldst > size)
		return (lsrc + size);
	if (ldst <= size)
		len = ldst + lsrc;
	while ((size - 1) > ldst && src != '\0')
	{
		dst[ldst] = *src;
		ldst++;
		src++;
	}
	dst[ldst] = '\0';
	return (len);
}
