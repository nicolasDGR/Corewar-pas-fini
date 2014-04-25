/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 17:36:49 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 14:00:59 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	index = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == NULL || !f)
		return (NULL);
	while (str[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	return (str);
}
