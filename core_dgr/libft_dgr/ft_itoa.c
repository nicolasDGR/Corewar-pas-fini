/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:35:52 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:48:42 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void		flag_c(int *flag, int n, int *len_nbr, int *temp);
static int		compt(int *len_nbr, int temp);

char			*ft_itoa(int n)
{
	char	*str;
	int		len_nbr;
	int		temp;
	int		flag;

	flag = 0;
	temp = n;
	len_nbr = 0;
	compt(&len_nbr, temp);
	flag_c(&flag, n, &len_nbr, &temp);
	if ((str = ft_strnew(len_nbr)) == NULL)
		return (NULL);
	if (n == 0)
		str[0] = 0 + '0';
	while (temp > 0)
	{
		str[--len_nbr] = temp % 10 + '0';
		temp = temp / 10;
	}
	if (flag)
		str[10] = 8 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}


static int		compt(int *len_nbr, int temp)
{
	while (temp != 0)
	{
		temp = temp / 10;
		*len_nbr = *len_nbr + 1;
	}
	return (*len_nbr);
}

static void		flag_c(int *flag, int n, int *len_nbr, int *temp)
{
	if (n <= 0)
	{
		*len_nbr = *len_nbr + 1;
		if (n == -2147483648)
		{
			n = n + 1;
			*flag = 1;
		}
		*temp = - n;
	}
}
