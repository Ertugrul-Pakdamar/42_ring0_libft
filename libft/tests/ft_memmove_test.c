/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:43:58 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/14 08:56:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*test;
	char	*res1;
	char	*res2;
	size_t	size;

	if (ac != 3)
	{
		printf("Please Input 2 Arguments: (void *test, size_t size)\n");
		return (1);
	}
	size = atoi(av[2]);
	test = (char *)malloc(size);
	memcpy(test, av[1], size);
	res1 = (char *)malloc(size);
	res2 = (char *)malloc(size);
	memmove(res1, test, size);
	ft_memmove(res2, test, size);
	if (!memcmp(res1, res2, size))
	{
		printf("Test Passed: %s\n", res2);
		return (0);
	}
	printf("Test Failed: %s\n", res2);
	return (1);
}
