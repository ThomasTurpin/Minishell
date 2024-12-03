/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_clem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:57:57 by cballet           #+#    #+#             */
/*   Updated: 2024/12/03 16:37:54 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/clem.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_isaspace(char *input)
{
	int		i;
	int		len;
	int	j;
	char	*dest;

	i = 0;
	while (input[i] == 32 & input[i] == '\t')
		i++;
	len = ft_strlen(input);
	while (input[len] == 32 && input[len == '\t'])
		len--;
	dest = (char *)malloc(sizeof(char) * ((len - i) + 1));
	if (!dest)
		return(NULL);
	j = 0;
	while (i <= len)
	{
		dest[j] = input[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

void	ft_parsing(char *input)
{
	ft_isaspace(input);

}


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
		ft_parsing(input);
		//exec;
		//check les signaux;
		// printf("Vous avez tapé : %s\n", input);
		free(input);
	}
	return (0);
}

/*Nous allons creer une */
