/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:17:17 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/21 12:17:23 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2) // Verifica se foi passado exatamente um argumento
    {
        fprintf(stderr, "Uso: %s <nome_do_arquivo>\n", argv[0]);
        return (1);
    }

    fd = open(argv[1], O_RDONLY); // Usa o nome do arquivo passado como argumento
    if (fd < 0)
    {
        perror("Erro ao abrir o arquivo");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
