/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 20:07:53 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/19 14:36:55 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*list2;

	list = *lst;
	list2 = *lst;
	if (!del || !lst || !list)
		return ;
	while (list)
	{
		list2 = list2->next;
		ft_lstdelone(list, del);
		list = list2;
	}
	*lst = 0;
}
