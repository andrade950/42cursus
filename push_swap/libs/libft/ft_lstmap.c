/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:00:17 by joaomart          #+#    #+#             */
/*   Updated: 2024/10/30 12:10:41 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newelement;
	void	*content;

	newlst = NULL;
	while (lst)
	{
		content = (f(lst->content));
		newelement = ft_lstnew(content);
		if (!newelement)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newelement);
		lst = lst->next;
	}
	return (newlst);
}

/*int main() 
{
    t_list *lst = ft_lstnew("Hello");
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("in"));
    ft_lstadd_back(&lst, ft_lstnew("C"));

    t_list *newlst = ft_lstmap(lst, duplicate_content, delete_content);

    // Exibe os conteúdos da nova lista para verificar o mapeamento
    t_list *temp = newlst;
    while (temp) {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpa a memória das duas listas
    ft_lstclear(&lst, delete_content);
    ft_lstclear(&newlst, delete_content);

    return 0;
}*/
