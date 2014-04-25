/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 20:53:42 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/29 22:43:59 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		j;
	char	*str;

	j = 0;
	str = ft_strnew(len + 1);
	if (str == NULL)
		return (NULL);
	while (len)
	{
		str[j] = s[start];
		start++;
		j++;
		len--;
	}
	return (str);
}
