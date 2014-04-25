/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:51:38 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:51:04 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*d;
	const char	*s;

	d = s1;
	s = s2;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (s1);
}
