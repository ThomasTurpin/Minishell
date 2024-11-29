/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:21:58 by tturpin           #+#    #+#             */
/*   Updated: 2024/11/29 17:17:35 by tturpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minishell.h"

int	main(void)
{
	char	*input;

	while (1)
	{
		input = readline("minishell> ");
		if (input == NULL)
		{
			printf("Bye!\n");
			break ;
		}
		// ft_parsing(input);
		// printf("Vous avez tapé : %s\n", input);
		free(input);
	}
	return (0);
}
