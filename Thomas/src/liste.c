/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:10:56 by tturpin           #+#    #+#             */
/*   Updated: 2024/11/29 15:22:26 by tturpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/tester.h"

t_command	*create_node(const char *command, const char *arg)
{
	t_command	*new_node;

	new_node = malloc(sizeof(t_command));
	new_node->redirect = false;
	if (!new_node)
		return (NULL);
	new_node->cmd = strdup(command);
	new_node->arg = strdup(arg);
	if (new_node->redirect == false)
	{
		new_node->fd_input = STDIN_FILENO;
		new_node->fd_output = STDOUT_FILENO;
	}
	new_node->next = NULL;
	return (new_node);
}

void	add_node(t_command **head, t_command *new_node)
{
	t_command	*current;

	if (!*head)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
}

void	display_commands(t_command *head)
{
	t_command	*current;

	current = head;
	while (current)
	{
		printf("Command: %s, Argument: %s\n", current->cmd, current->arg);
		printf("Fd input: %d, fd output: %d\n", current->fd_input, current->fd_output);
		current = current->next;
	}
}
