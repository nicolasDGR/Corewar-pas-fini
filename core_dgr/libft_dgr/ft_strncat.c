/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:39:04 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:01:13 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*src;
	char		*dest;
	int			i;
	int			j;
	size_t		len;

	i = 0;
	j = 0;
	src = (char *)s2;
	dest = s1;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	while (dest[i] != '\0')
		i++;
	len = ft_strlen(dest);
	if (dest != '\0')
	{
		while (n-- != 0 && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
