/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:04:39 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 14:09:18 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*list;

	if (!lst)
		return (0);
	len = 0;
	list = lst;
	while ((*list).next)
	{
		list = (*list).next;
		len++;
	}
	return (len + 1);
}
