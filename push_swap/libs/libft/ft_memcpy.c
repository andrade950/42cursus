/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:23:14 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 11:17:48 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src)
		return (d);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	src[] = "boas!";
	char	dest[10];
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("string copiada usando a funcao criada: %s\n", dest);
	return (0);
}*/
