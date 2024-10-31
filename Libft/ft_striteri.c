/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:02 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/28 12:12:25 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void make_uppercase(unsigned int i, char *c) {
    if (c) {
        *c = ft_tolower((unsigned char)*c);
    }
}

int	main(void)
{
    char str[] = "OLA MANO";
    
    printf("Original string: %s\n", str);
    
    ft_striteri(str, make_uppercase);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}*/
