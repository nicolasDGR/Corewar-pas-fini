/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:08:44 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:50:43 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*comp1;
	const unsigned char	*comp2;
	int					i;

	i = 0;
	comp1 = s1;
	comp2 = s2;
	while (n > 0)
	{
		if (comp1[i] != comp2[i])
			return (comp1[i]-comp2[i]);
		n--;
		i++;
	}
	return (0);
}
