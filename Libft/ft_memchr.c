/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:00:16 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 15:38:01 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = "test";
	int char_find = 'e';
	char *result = ft_memchr(str, char_find, 5);

	if (result != NULL)
	{
		printf("o caracter '%c' foi encontrado 
		na string '%s'\n", char_find, result);
	}
	else
	{
		printf("o caracter '%c' nao foi encontrado na string\n", char_find);
	}
	return (0);
}*/
