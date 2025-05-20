/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:33:27 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/13 11:55:50 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*test;
	size_t	size;

	if (ac != 4)
	{
		printf("Please Input 3 Arguments: (void *s, char c, size_t n)\n");
		return (1);
	}
	test = malloc(strlen(av[1]));
	if (test == NULL)
	{
		printf("Memory Allocation Failed!\n");
		return (1);
	}
	strcpy(test, av[1]);
	size = atoi(av[3]);
	if (ft_memset(test, av[2][0], size) != memset(test, av[2][0], size))
	{
		printf("Test Failed: %s\n", test);
		return (1);
	}
	else
		printf("Test Passed: %s\n", (char *)ft_memset(test, av[2][0], size));
}
