/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 08:56:15 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/21 09:04:46 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*one;
	t_list	*two;
	t_list	*to_change;
	void	*cnt;

	one = malloc(sizeof(t_list));
	two = malloc(sizeof(t_list));
	head = malloc(sizeof(t_list));
	to_change = malloc(sizeof(t_list));
	one->next = two;
	*head = *one;
	cnt = malloc(10);
	strcpy((char *)cnt, "Hello");
	to_change->content = cnt;
	ft_lstadd_front(&head, to_change);
	if (strcmp((char *)head->content, (char *)cnt) == 0)
	{
		printf("Test Passed: %s\n", (char *)head->content);
		return (0);
	}
	printf("Test Failed: %s\n", (char *)head->content);
	return (1);
}
