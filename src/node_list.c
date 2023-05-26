/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:52:42 by yachaab           #+#    #+#             */
/*   Updated: 2023/05/21 17:53:29 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	return (lst);
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = NULL;
// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

t_infile	*ft_lstnew_infile(char *file_name)
{
	t_infile	*node;

	node = NULL;
	node = (t_infile *)malloc(sizeof(t_infile));
	if (!node)
		return (NULL);
	node->infile = file_name;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = NULL;
	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (last == NULL)
		*lst = new;
	else
		last->next = new;
}