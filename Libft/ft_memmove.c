/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:45:43 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 11:24:58 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (src == dest)
		return (dest);
	i = 0;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "bacalhau";
	char	dst[8];
	ft_memmove(dst, src, sizeof(dst) - 1);
    dst[sizeof(dst) -1] = '\0';

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);

	return (0);
}*/
