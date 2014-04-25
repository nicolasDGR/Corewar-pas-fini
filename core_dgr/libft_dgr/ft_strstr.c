/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 15:33:26 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:08:09 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (!*s2)
		return (char*)s1;
	len = ft_strlen(s2);
	while (*s1 != '\0')
	{
		if (ft_memcmp(s1, s2, len) == 0)
			return (char*)s1;
		s1++;
	}
	return (NULL);
}
