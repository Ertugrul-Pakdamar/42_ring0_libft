/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:03:58 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/21 11:06:53 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	f(void *src)
{
	strcpy((char *)src, "aaa");
}

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
	ft_lstiter(head, f);
	if (strcmp((char *)head->content, "aaa") == 0)
	{
		printf("Test Passed: %s\n", (char *)head->content);
		return (0);
	}
	printf("Test Failed: %s\n", (char *)head->content);
	return (1);
}
