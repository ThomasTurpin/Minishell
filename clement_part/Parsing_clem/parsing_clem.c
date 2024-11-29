/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_clem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:57:57 by cballet           #+#    #+#             */
/*   Updated: 2024/11/29 16:58:13 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_clem/parsing.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char *ft_strcpy(char *str, char *dest, int i, int len)
{
	int	j;

	j = 0;
	while (str[i] <= len)
	{
		dest[j] = str[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char *ft_read_and_copy(int argc, char **argv)
{
	char *result;
	int	i;


	i = 1;
	while(argv[i])
	{

	}


}
char	*ft_isaspace(char *input)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(input);
	while (i == 32)
		i++;
	while (len == 32)
		len--;
	dest = malloc(sizeof(char * (len-i)));
	ft_strcpy(input, dest, i, len);
	return (dest);
}

void	ft_parsing(int argc, char **argv, char *input)
{
	char	*dest;
	int i;

	i = 0;
	ft_read_and_copy(argc, argv);
	dest = ft_isaspace(input);
	printf("%s", dest);
}

int	main(int argc, char **argv)
{
	if (argc != 0)
	{
		ft_parsing(argv[1]);
	}
}
