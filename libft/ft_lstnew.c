/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 17:19:23 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/02/15 16:45:13 by danielvankl   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
