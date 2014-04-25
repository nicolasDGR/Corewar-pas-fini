/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nicolasdgr60@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/25 13:02:12 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:58:44 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	dest = NULL;
	i = 0;
	dest = malloc((ft_strlen(s1) + 1) * sizeof(*dest));
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
