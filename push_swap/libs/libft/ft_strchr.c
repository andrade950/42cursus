/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:21:40 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 13:11:14 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == x)
		{
			return ((char *)s);
		}
		s++;
	}
	if (x == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	const char *str = "testing function!";
	int char_find = 'a';
	char *result = ft_strchr(str, char_find);

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
