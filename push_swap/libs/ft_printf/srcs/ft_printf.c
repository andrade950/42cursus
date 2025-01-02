/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:53:38 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/07 15:51:36 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_print_format(*(++format), args);
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/*#include <stdio.h>

int main(void)
{
    int len1, len2;

    // Teste com caractere
    len1 = ft_printf("Meu printf: %c\n", 'A');
    len2 = printf("Original printf: %c\n", 'A');
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);
    
    // Teste com string
    len1 = ft_printf("Meu printf: %s\n", "Hello, 42!");
    len2 = printf("Original printf: %s\n", "Hello, 42!");
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com inteiros
    len1 = ft_printf("Meu printf: %d\n", 42);
    len2 = printf("Original printf: %d\n", 42);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com inteiros negativos
    len1 = ft_printf("Meu printf: %d\n", -42);
    len2 = printf("Original printf: %d\n", -42);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com unsigned int
    len1 = ft_printf("Meu printf: %u\n", 4294967295U);
    len2 = printf("Original printf: %u\n", 4294967295U);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com hexadecimal (minúsculas)
    len1 = ft_printf("Meu printf: %x\n", 255);
    len2 = printf("Original printf: %x\n", 255);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com hexadecimal (maiúsculas)
    len1 = ft_printf("Meu printf: %X\n", 255);
    len2 = printf("Original printf: %X\n", 255);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com ponteiro
    int num = 42;
    len1 = ft_printf("Meu printf: %p\n", &num);
    len2 = printf("Original printf: %p\n", &num);
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    // Teste com caractere de porcentagem
    len1 = ft_printf("Meu printf: %%\n");
    len2 = printf("Original printf: %%\n");
    printf("Retorno: meu = %d, original = %d\n\n", len1, len2);

    return 0;
}*/
