/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:25:31 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 11:49:52 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char src[] = "bacalhau";
	char dst[15];
	size_t copied;

	copied = ft_strlcpy(dst, src, sizeof(dst));
	printf("Copiado '%s', Caracteres para copiar: %zu\n", dst, copied);
	return 0;
}*/
