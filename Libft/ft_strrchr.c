/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:12:26 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 13:18:55 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int						i;
	unsigned char			x;

	x = (unsigned char)c;
	i = ft_strlen(s);
	if (x == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == x)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *str = "hello guys!";
	int charr = 'h';
	char *result;

	result = ft_strrchr(str, charr);

	if (result != NULL)
	{
		printf("%i em %s esta em %ld\n", charr, str, result - str);
	}
	else
	{
		printf("%i nao encontrado em %s\n", charr, str);
	}
	return (0);
}*/
