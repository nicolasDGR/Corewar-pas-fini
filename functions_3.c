/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngolovin <ngolovin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:48:07 by ngolovin          #+#    #+#             */
/*   Updated: 2014/01/27 00:56:36 by ngolovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ldi(int *av, char *at)
{
// recuperer le current process
// additionne les 2 premiers, traite ca comme une adresse, y lit une valeur de la taille d’un registre et la met dans le 3eme.
}

void				sti(int *av, char *at)
{
// recuperer le current process
// Additionne les deux derniers, utilise cette somme comme une adresse ou sera copiée la valeur du premier paramètre.
}

void				fork(int *av, char *at)
{
// recuperer le current process
// Crée un nouveau processus, qui hérite des diﬀérents états de son père, à part son PC, qui est mis à (PC + (1er paramètre % IDX_MOD)).
}

void				lld(int *av, char *at)
{
// recuperer le current process
// similaire a ld sans la restriction de IDX_MOD (ici 512) (a confirmer)
}

void				lldi(int *av, char *at)
{
// recuperer le current process
// Pareil que ldi, mais n’applique aucun modulo aux adresses.
}
