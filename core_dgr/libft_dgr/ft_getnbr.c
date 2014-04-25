/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/18 22:55:16 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/01/22 13:50:34 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		obtain_nbr(char *str, int nbr)
{
	if (!(*str >= '0' && *str <= '9'))
		return (nbr);
	nbr = nbr * 10 + (*str - '0');
	return (obtain_nbr(str + 1, nbr));
}

int		ft_getnbr(char *str)
{
	int	nbr_sign;

	nbr_sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			nbr_sign *= -1;
		str = str + 1;
	}
	return (obtain_nbr(str, 0) * nbr_sign);
}
