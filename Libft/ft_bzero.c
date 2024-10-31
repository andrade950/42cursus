/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:59:31 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/22 11:19:57 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	str[20] = "good day!";
	printf("antes do bzero: %s\n", str);

	ft_bzero(str, 5);
	printf("depois do bzero: %s\n", str);
	return (0);
}*/
