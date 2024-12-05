/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_clem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:57:57 by cballet           #+#    #+#             */
/*   Updated: 2024/12/05 17:22:53 by cballet          ###   ########.fr       */
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
	if (!input)
		return (NULL);
	while (input[i] == 32 || input[i] == '\t')
		i++;
	len = ft_strlen(input);
	while (len > i && (input[len - 1] == 32 || input[len - 1] == '\t'))
		len--;
	dest = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!dest)
		return(NULL);
	j = 0;
	while (i < len)
	{
		dest[j] = input[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	printf("Résultat après ft_isaspace: '%s'\n", dest);
	fflush(stdout);
	return (dest);
}

void	ft_parsing(char *input)
{
	char *trimmed_input;
	printf("Je rentre dans ft_parsing\n");
	fflush(stdout);
	trimmed_input = ft_isaspace(input);
	if (trimmed_input)
		free(trimmed_input);

}


int	main(void)
{
	char	*input;

	while (1)
	{
		printf("avant readline\n");
		fflush(stdout);
		input = readline("minishell> ");
		printf("%s\n", input);
		fflush(stdout);
		if (input == NULL)
		{
			printf("Bye!\n");
			fflush(stdout);
			break ;
		}
		if (input[0] == '\0')
		{
			printf("Vous avez entré une chaîne vide.\n");
			fflush(stdout);
			free(input);
			continue;
		}
		printf("Input reçu : '%s'\n", input);
		fflush(stdout);

		ft_parsing(input);
		//exec;
		//check les signaux;
		// printf("Vous avez tapé : %s\n", input);
		free(input);
	}
	return (0);
}

/*Nous allons creer une */
