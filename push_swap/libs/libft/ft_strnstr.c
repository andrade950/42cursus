/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:42:10 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/23 10:59:39 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
				{
					return ((char *)big + i);
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *big = "gatos das botas e o burro";
	const char *little = "tas";
	size_t len = 50;
	char *result = ft_strnstr(big, little, len);

	if (result != NULL)
	{
		printf("string little encontrada em: %s\n", result);
	}
	else
	{
		printf("string little nao encontrada.\n");
	}
	return (0);
}*/
