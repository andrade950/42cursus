/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:33:39 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/25 14:38:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	else
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

/*int    main(void)
{
    const char    *s1 = "bom dia";
    const char    *set = "ab";

    char    *trim = ft_strtrim(s1, set);

    if (trim != NULL)
    {
        printf("original: %s\n", s1);
        printf("string cortada: %s\n", trim);
        free(trim);
    }
    return(0);
}*/
