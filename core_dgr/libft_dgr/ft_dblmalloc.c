/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 19:43:21 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/01/26 19:43:25 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		**malloc_dblarray(int width, int height)
{
	int	**dblarray;
	int	i;

	dblarray = (int**)malloc(sizeof(int*) * width);
	i = 0;
	while (i < width)
	{
		dblarray[i] = (int*)malloc(sizeof(int) * height);
		i++;
	}
	return (dblarray);
}
