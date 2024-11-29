/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:39:14 by tturpin           #+#    #+#             */
/*   Updated: 2024/11/29 15:52:50 by tturpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include <errno.h>
# include <fcntl.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_command
{
	char				*cmd;
	char				*arg;
	int					fd_output;
	int					fd_input;
	bool				redirect;
	struct s_command	*next;
}						t_command;

void					display_commands(t_command *head);
void					add_node(t_command **head, t_command *new_node);
t_command				*create_node(const char *command, const char *arg);

#endif
