/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:50:06 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 11:54:58 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	j = dst_len;
	i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	dst[20] = "good";
	const char	src[] = "luck!";
	size_t	buffer_size = sizeof(dst);

	printf("antes da concatenacao: %s\n", dst);
	size_t	result = ft_strlcat(dst, src, buffer_size);
	printf("depois da concatenada %s\n", dst);
	printf("comprimento resultante %zu\n", result);
	return (0);
}*/
