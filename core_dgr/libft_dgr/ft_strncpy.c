/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:12:22 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:01:44 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (s2[i] != '\0')
				s1[i] = s2[i];
			else
				break ;
		i++;
		}
		if (i < n)
		{
			while (i < n)
			{
				s1[i] = '\0';
				i++;
			}
		}
	}
	return (s1);
}
