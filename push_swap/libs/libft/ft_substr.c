/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:10:11 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:55 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char *s = "Hello, World!";
	char *substr;

	substr = ft_substr(s, 7, 5);
	if (substr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Substring 1: %s\n", substr);
	free(substr);

	substr = ft_substr(s, 20, 5);
	if (substr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Substring 4: %s\n", substr);
	free(substr);

	return (0);
}*/
