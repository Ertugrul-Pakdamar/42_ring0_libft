/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:13:37 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/21 09:16:53 by epakdama         ###   ########.fr       */
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
	void	*src;

	src = malloc(10);
	strcpy((char *)src, "World");
	head = malloc(sizeof(t_list));
	head->content = src;
	cnt = malloc(10);
	strcpy((char *)cnt, "Hello");
	i = 0;
	len = 5;
	while (++i < len)
		ft_lstadd_front(&head, ft_lstnew(cnt));
	if (strcmp((char *)ft_lstlast(head)->content, (char *)src) == 0)
	{
		printf("Test Passed: %s\n", (char *)ft_lstlast(head)->content);
		return (0);
	}
	printf("Test Failed: %s\n", (char *)ft_lstlast(head)->content);
	return (1);
}
