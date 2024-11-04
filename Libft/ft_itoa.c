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
	char *result;
	
	result = ft_itoa(-456);
	if (result == NULL)
	{
		printf("Memory allocation failed for number -456.\n");
		return (1);
	}
	printf("ft_itoa(-456) = %s\n", result);
	free(result);
	
	return (0);
}*/
