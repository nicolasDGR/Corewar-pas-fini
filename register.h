/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   register.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannest <avannest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:52:03 by avannest          #+#    #+#             */
/*   Updated: 2014/01/08 18:44:59 by avannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REGISTER_H
# define REGISTER_H

/*
** Some functions dedicated to manipulate registers which size can be adjusted
*/
void		affect(char *reg, int val);
int			get(char *reg);

#endif /* !REGISTER_H */

