/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:52:01 by tturpin           #+#    #+#             */
/*   Updated: 2024/11/29 15:53:19 by tturpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/tester.h"

// int	main(int argc, char **argv)
// {
// 	t_command	*commands;
// 	t_command	*new_node;

// 	commands = NULL;
// 	if (argc < 3)
// 	{
// 		printf("Wrong number of argv");
// 		return (1);
// 	}
// 	new_node = create_node(argv[1], argv[2]);
// 	if (!new_node)
// 	{
// 		perror("Failed to create node");
// 		return (1);
// 	}
// 	add_node(&commands, new_node);
// 	display_commands(commands);
// 	return (0);
// }

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
		printf("Vous avez tapé : %s\n", input);
		free(input);
	}
	return (0);
}
