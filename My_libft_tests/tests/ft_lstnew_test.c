/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:25:52 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 14:10:22 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	t_list	*list;

	s = malloc(6);
	strcpy(s, "Hello");
	list = ft_lstnew(s);
	if (strcmp((*list).content, s) == 0)
	{
		printf("Test Passed: %s\n", (char *)(*list).content);
		return (0);
	}
	printf("Test Failed: %s\n", (char *)(*list).content);
	return (1);
}
