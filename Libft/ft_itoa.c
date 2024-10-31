/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:25:01 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/28 11:36:06 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numbersize(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		i += 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	unsigned int	i;

	i = numbersize(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		str[0] = '0';
	str[i] = '\0';
	while (nbr != 0)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}

/*int	main(void)
{
	int numbers[] = {0, 123, -456, 7890, 
		-2147483648, 2147483647}; // Casos de teste
	int i;
	char *result;

	for (i = 0; i < 6; i++)
	{
		result = ft_itoa(numbers[i]); // Converte o número para string
		if (result == NULL)
		{
			printf("Memory allocation failed for number %d.\n", numbers[i]);
			return (1);
		}
		printf("ft_itoa(%d) = %s\n", numbers[i], result); // Exibe o resultado
		free(result); // Libera a memória alocada por `ft_itoa`
	}

	return (0);
}*/
