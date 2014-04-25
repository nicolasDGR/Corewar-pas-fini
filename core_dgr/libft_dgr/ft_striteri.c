/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 17:36:14 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/01 11:50:57 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		index;

	index = 0;
	str = s;
	if (!s || !f)
		return ;
	while (index > 0)
	{
		f(index, &str[index]);
		index--;
	}
}
