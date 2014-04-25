/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngolovin <ngolovin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/27 11:18:54 by ngolovin          #+#    #+#             */
/*   Updated: 2014/01/29 05:11:56 by ngolovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define  FUNCTIONS_H

typedef struct		s_ft_tab
{
	char			c;
	char			d;
	char			reg[REG_NUMBER][REG_SIZE];
}					t_ft_tab;


/*
** AND TAB
*/
static const t_tab	and_tab[9] =
{
	{'r', 'r', processus_list->reg[av0] & processus_list->reg[av1]},
	{'r', 'd', processus_list->reg[av[0]] & av[1]},
	{'d', 'r', processus_list->reg[av[1]] & av[0]},
	{'d', 'i', mem[av[1]] & av[0]},
	{'i', 'd', mem[av[0]] & av[1]},
	{'r', 'i', processus_list->reg[av[0]] & mem[av[1]]},
	{'i', 'r', processus_list->reg[av[1]] & mem[av[0]]},
	{'i', 'i', av[1] & av[0]},
	{'d', 'd', mem[av[1]] & mem[av[0]]},
	{'\0', '\0', '\0'}
};

/*
** OR TAB
*/
static const t_tab	or_tab[9] =
{
	{'r', 'r', processus_list->reg[av[0]] | processus_list->reg[av1]},
	{'r', 'd', processus_list->reg[av[0]] | av[1]},
	{'d', 'r', processus_list->reg[av[1]] | av[0]},
	{'d', 'i', mem[av[1]] | av[0]},
	{'i', 'd', mem[av[0]] | av[1]},
	{'r', 'i', processus_list->reg[av[0]] | mem[av[1]]},
	{'i', 'r', processus_list->reg[av[1]] | mem[av[0]]},
	{'i', 'i', av[1] | av[0]},
	{'d', 'd', mem[av[1]] | mem[av[0]]},
	{'\0', '\0', '\0'}
};

/*
** XOR TAB
*/
static const t_tab	xor_tab[9] =
{
	{'r', 'r', processus_list->reg[av0] ^ processus_list->reg[av1]},
	{'r', 'd', processus_list->reg[av[0]] ^ av[1]},
	{'d', 'r', processus_list->reg[av[1]] ^ av[0]},
	{'d', 'i', mem[av[1]] ^ av[0]},
	{'i', 'd', mem[av[0]] ^ av[1]},
	{'r', 'i', processus_list->reg[av[0]] ^ mem[av[1]]},
	{'i', 'r', processus_list->reg[av[1]] ^ mem[av[0]]},
	{'i', 'i', av[1] ^ av[0]},
	{'d', 'd', mem[av[1]] ^ mem[av[0]]},
	{'\0', '\0', '\0'}
};

/*
** LD TAB
*/
static const t_tab	ld_tab[9] =
{
	{'r', 'd', processus_list->reg[av[0]] = av[1]},
	{'r', 'i', processus_list->reg[av[0]] = mem[av[1]]},
	{'\0', '\0', '\0'}
};

/*
** ST TAB
*/
static const t_tab	st_tab[9] =
{
	{'r', 'r', processus_list->reg[av[1]] = processus_list->reg[av[0]]},
	{'i', 'r', mem[av[1]] = processus_list->reg[av[0]]},
	{'\0', '\0', '\0'}
};

#endif /* !FUNCTIONS_H */
