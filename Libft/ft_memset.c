/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:36:02 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 09:57:34 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	if (n == 0)
		return (s);
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	array[10];
	ft_memset(array, '+', sizeof(array));
	printf("Array preenchido: %s\n", array);
	return 0;
}*/
