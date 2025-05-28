/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:51:34 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:20:15 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	size_t	n;

	if (ac != 4)
	{
		printf("Please Input 3 Arguments: (void *s1, void *s2, size_t n)\n");
		return (1);
	}
	s1 = av[1];
	s2 = av[2];
	n = atoi(av[3]);
	if (ft_memcmp(s1, s2, n) == memcmp(s1, s2, n))
	{
		printf("Test Passed: %d\n", ft_memcmp(s1, s2, n));
		return (0);
	}
	printf("Test Failed: %d\n", ft_memcmp(s1, s2, n));
	return (1);
}
