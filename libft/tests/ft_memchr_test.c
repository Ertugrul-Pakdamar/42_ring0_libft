/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:28:57 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/14 10:39:55 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char			*test;
	unsigned int	size;

	if (ac != 4)
	{
		printf("Please Input 3 Arguments: (void *s, int c, size_t n)");
		return (1);
	}
	size = atoi(av[3]);
	test = (char *)malloc(strlen(av[1]));
	memmove(test, av[1], strlen(av[1]));
	if (ft_memchr(test, av[2][0], size) == memchr(test, av[2][0], size))
	{
		printf("Test Passed: %s\n", (char *)ft_memchr(test, av[2][0], size));
		return (0);
	}
	printf("Test Failed: %s\n", (char *)ft_memchr(test, av[2][0], size));
	return (1);
}
