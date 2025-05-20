/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:49:54 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/16 08:55:24 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	s;
	int	l;

	if (ac != 5)
	{
		printf("(char *s, int start, int len, char *res)\n ");
		return (1);
	}
	s = atoi(av[2]);
	l = atoi(av[3]);
	if (strcmp(ft_substr(av[1], s, l), av[4]) == 0)
	{
		printf("Test Passed: %s\n", ft_substr(av[1], s, l));
		return (0);
	}
	printf("Test Failed: %s\n", ft_substr(av[1], s, l));
	return (1);
}
