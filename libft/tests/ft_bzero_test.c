/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:33:27 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/13 11:46:00 by epakdama         ###   ########.fr       */
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
		printf("Please Input 2 Arguments: (void *s, size_t n)\n");
		return (1);
	}
	test1 = malloc(strlen(av[1]));
	test2 = malloc(strlen(av[1]));
	if (test1 == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	strcpy(test1, av[1]);
	strcpy(test2, av[1]);
	size = atoi(av[2]);
	ft_bzero(test1, size);
	bzero(test2, size);
	if (memcmp(test1, test2, strlen(test1)) == 0)
		printf("Test Passed: %s\n", test1);
	else
		printf("Test Failed: %s\n", test1);
}
