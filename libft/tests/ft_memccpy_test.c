/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:14:26 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:20:07 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*test1;
	size_t	n;

	if (ac != 4)
	{
		printf("Please Input 3 Arguments: (void *src, char c, size_t n)\n");
		return (1);
	}
	n = atoi(av[3]);
	test1 = malloc(strlen(av[1]));
	if (ft_memccpy(test1, av[1], av[2][0], n) == memccpy(test1, av[1], av[2][0],
			n))
	{
		printf("Test Passed: %s\n", test1);
		return (0);
	}
	else
	{
		printf("Test Failed: %s\n", test1);
		return (1);
	}
}
