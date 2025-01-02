/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:53:59 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/28 11:16:54 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (!c)
		return (*s != '\0');
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static char	*saveword(const char *s, char c)
{
	char		*str;
	int			n;
	int			i;

	n = 0;
	i = 0;
	while (s[n] && s[n] != c)
		n++;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

static void	*freearray(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	int			i;

	i = 0;
	array = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!array || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			array[i] = saveword(s, c);
			if (array[i] == NULL)
			{
				return (freearray(array));
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}

/*int	main(void)
{
	char const *str = "hello world porco camelo urso     palhaco";
	char **result;
	int i = 0;
	char delimiter = ' ';

	result = ft_split(str, delimiter); // Chama a função com 'str' e ' '
	if (result == NULL)                // Verifica falha de alocação
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	while (result[i] != NULL)          // Imprime cada palavra
	{
		printf("result[%d]: %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)          // Libera a memória de cada palavra
	{
		free(result[i]);
		i++;
	}
	free(result);                      // Libera o array de ponteiros
	return 0;
}*/
