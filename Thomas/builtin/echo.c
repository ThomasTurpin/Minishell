/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:23:02 by tturpin           #+#    #+#             */
/*   Updated: 2024/12/05 12:36:43 by tturpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/tester.h"

void	builtin_echo(t_command *cmd, char *str)
{
	bool	new_line;

	new_line = true;

	if (cmd->arg[1] == '-n')
		new_line = false;
	if (new_line == false)
		printf("%s", str);
	else
		printf("%s\n", str);

}
