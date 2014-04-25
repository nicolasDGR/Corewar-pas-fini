/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:40:31 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:44:38 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *c)
{
	int		num;
	int		flag;
	int		i;

	num = 0;
	flag = 1;
	i = 0;
	while ((c[i] >= '\t' && c[i] <= '\r') ||  c[i] == ' ')
		i++;
	if (c[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (c[i] == '+')
		i++;
	if (ft_isdigit(c[i]) == 0)
		num = 0;
	while (ft_isdigit(c[i]) == 1 && c[i] != '\0')
	{
		num = num * 10 + c[i] - '0';
		i++;
	}
	num = num * flag;
	return (num);
}

