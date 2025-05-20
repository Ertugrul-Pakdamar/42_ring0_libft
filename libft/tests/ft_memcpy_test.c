/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:03:10 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/13 11:46:16 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*test1;
	char	*test2;
	size_t	size;

	if (ac != 3)
	{
		printf("Please Input 2 Arguments: (void *src, size_t n)\n");
	}
	size = atoi(av[2]);
	test1 = malloc(size);
	test2 = malloc(size);
	if (test1 == NULL || test2 == NULL)
	{
		printf("Memory Allocation Failed\n");
		return (1);
	}
	if (ft_memcpy(test1, av[1], size) != memcpy(test1, av[1], size))
	{
		printf("Test Failed: %s\n", test1);
		return (1);
	}
	printf("Test Passed: %s\n", test1);
	return (0);
}
