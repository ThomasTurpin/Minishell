/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:05:15 by cballet           #+#    #+#             */
/*   Updated: 2024/12/03 16:52:25 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-Cree structure pour stocker les infos
-Comptage des quotes, double quotes ou autres caracteres specifique (separateur, pipes)
-repartion des commandes et leurs arguments
-changer les TAB par des espaces
-Verifier si tout est bien repartie
-Checker la position des quotes et separateur
*/


/*COMPTAGE DES CMD ET TRANSFERT

-Nous allons creer une liste chainee
-Dans chaque node ont strcpy : cmd, argument, fd, quote et double cote.
Exemple :

struct	s_cmd
{
	char *cmd
	char *fd
	char *arg
} t_cmd

while (input[i] != 23 && input[i] != '\t')
t_cmd->cmd = ft_strcpy(t_cmd, input, index)

*/

