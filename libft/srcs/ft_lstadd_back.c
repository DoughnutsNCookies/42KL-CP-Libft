/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:00:23 by schuah            #+#    #+#             */
/*   Updated: 2022/11/02 15:49:45 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst || !new)
		return ;
	if (*lst != NULL)
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
	else
		*lst = new;
}
