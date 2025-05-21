/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:14:06 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 14:51:04 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	index;

	index = 0;
	if (!lst)
		return ;
	if (!lst[0])
	{
		lst[0] = new;
		return ;
	}
	while (lst[index]->next)
		index++;
	lst[index]->next = new;
}
