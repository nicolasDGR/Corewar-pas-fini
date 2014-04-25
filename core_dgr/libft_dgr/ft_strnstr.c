/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 11:39:43 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:03:41 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	len;

	i = 0;
	if (*s2 == 0)
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n >= len)
	{
		if (*s1 == *s2)
		{
			if (ft_strncmp(s1, s2, len) == 0)
				return ((char*)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
