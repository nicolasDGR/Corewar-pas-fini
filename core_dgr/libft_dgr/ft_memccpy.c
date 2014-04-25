/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:18:06 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:49:54 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	unsigned char		uc;

	dest = s1;
	src = s2;
	uc = c;
	if (s1)
	{
		while (n != 0)
		{
			if ((*dest++ = *src++) == uc)
				return (dest);
			n--;
		}
		return (0);
	}
	else
		return (NULL);
}
