/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelhadj <ebelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 14:19:26 by ebelhadj          #+#    #+#             */
/*   Updated: 2014/01/08 19:10:25 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		COREWAR_H
# define	COREWAR_H

#include "op.h" /* MEM_SIZE */
#include "processus.h"

char			mem[MEM_SIZE];
t_processus     *processus_list;

#endif
