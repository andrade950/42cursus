/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:40:28 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/28 11:58:43 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char ft_toupper(unsigned int i, char c) {
    if (c >= 'a' && c <= 'z')
    {
    	c -= 32;
    }
    return (c);
}

int	main(void)
{
	const char	*s = "the best job";
	char	*result = ft_strmapi(s, ft_touper);

	if (result == NULL)
	{
		printf("deu ruim kkk");
		return (1);
	}
	printf("string original: %s\n", s);
	printf("string modificada: %s\n", result);
	free(result);

	return (0);
}*/
