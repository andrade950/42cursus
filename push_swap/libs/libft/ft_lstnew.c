/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:27:17 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/30 10:00:05 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main() 
{
    char *str = "Boas!";
    
    t_list *node = ft_lstnew((void *)str);

    if (node != NULL) 
    {
        printf("Conteúdo do nó: %s\n", (char *)node->content);
    } else 
    {
        printf("Erro ao criar o nó.\n");
    }

    free(node);

    return 0;
}*/
