/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:54:24 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:51:41 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;

	dest = s1;
	src = s2;
	if (src <= dest)
	{
		dest = dest + (n - 1);
		src = src + (n - 1);
		while (n > 0)
		{
			*dest-- = *src--;
			n--;
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
