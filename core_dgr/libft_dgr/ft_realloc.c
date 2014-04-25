/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 12:49:32 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/22 12:49:32 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*res;

	if ((res = malloc(new_size)))
	{
		ft_bzero(res, new_size);
		if (ptr)
		{
			ft_memmove(res, ptr, old_size);
			free(ptr);
		}
	}
	return (res);
}
