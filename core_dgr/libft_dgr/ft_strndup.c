/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 12:49:12 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/22 12:49:15 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*result;
	char	*start;

	result = (char *)malloc((n + 1) * sizeof(char));
	if (!result)
		return (NULL);
	start = result;
	while (*s1 && n--)
		*result++ = *s1++;
	*result = '\0';
	return (start);
}
