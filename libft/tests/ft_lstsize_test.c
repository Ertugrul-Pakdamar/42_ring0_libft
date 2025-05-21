/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:05:44 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/21 09:11:22 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	int		i;
	int		len;
	void	*cnt;

	head = malloc(sizeof(t_list));
	cnt = malloc(10);
	strcpy((char *)cnt, "Hello");
	i = 0;
	len = 5;
	while (++i < len)
		ft_lstadd_front(&head, ft_lstnew(cnt));
	if (ft_lstsize(head) == len)
	{
		printf("Test Passed: %d\n", ft_lstsize(head));
		return (0);
	}
	printf("Test Failed: %d\n", ft_lstsize(head));
	return (1);
}
