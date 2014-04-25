/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 19:22:12 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/01/26 19:22:37 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	}
	else
	{
		return ((int)((unsigned int)(*s1) - (unsigned int)(*s2)));
	}
}
