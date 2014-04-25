/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngolovin <ngolovin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:38:19 by ngolovin          #+#    #+#             */
/*   Updated: 2014/01/29 05:31:47 by ngolovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write a char on stdout
*/
void				aff(int *av, char *at)
{
	char c;

	c = av[0];
	write(1, &c, 1);
}

/*
** Report live
*/
void				live(int *av, char *at)
{
	live_report(av[0]);
}

/*
** T_REG = T_DIR | T_IND
*/
void				ld(int *av, char *at)
{
	int			i;

	i = 0;
	while (ld_tab[i].c != '\0')
	{
		if (at[1] == ld_tab[i].d)
			processus_list->reg[av[2]] = ld_tab[i].reg;
		++i;
	}
}

/*
** T_IND | T_REG = T_REG
*/
void				st(int *av, char *at)
{
	int			i;

	i = 0;
	while (st_tab[i].c != '\0')
	{
		if (at[i] == st_tab[i].c)
			processus_list->reg[av[2]] = st_tab[i].reg;
		++i;
	}
}


/*
** T_REG = T_REG + T_REG
*/
void				add(int *av, char *at)
{
	(void)at;

	processus_list->reg[av[2]] = processus_list->reg[av[0]]
								+ processus_list->reg[av[1]];
}
