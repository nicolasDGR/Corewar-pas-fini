/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:35:07 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/29 22:46:59 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	unsigned char		c1;

	s1 = s;
	c1 = c;
	while (n > 0)
	{
		if (*s1 == c1)
			return ((void *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
