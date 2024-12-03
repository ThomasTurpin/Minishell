/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clem.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:59:56 by cballet           #+#    #+#             */
/*   Updated: 2024/12/03 17:42:26 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEM_H
# define CLEM_H

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

typedef struct s_cmd
{
	char			**cmd;
	int				fd_input;
	int				fd_output;
	bool			pipe;
	bool			quote;
	struct s_cmd	*next;
	struct s_cmd	*prev;
}					t_cmd;

typedef	struct s_parsing
{
	int	s_quote;
	int	d_quote;
	bool	pipe;
}	t_parsing;

#endif