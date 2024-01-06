/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:28:13 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:12:45 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*contnt;
	t_list	*nlist;

	if (!lst || !f || !del)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		contnt = f(lst->content);
		node = ft_lstnew(contnt);
		if (!node)
		{
			del(contnt);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&nlist, node);
		lst = lst->next;
	}
	return (nlist);
}
