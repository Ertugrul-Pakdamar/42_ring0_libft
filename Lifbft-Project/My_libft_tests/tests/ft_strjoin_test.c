/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:27:09 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:21:01 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;

	if (ac != 4)
	{
		printf("Please Input 3 Arguments: (char *s1, char *s2, char *res)\n");
		return (1);
	}
	s1 = malloc(100);
	s2 = malloc(100);
	strcpy(s1, av[1]);
	strcpy(s2, av[2]);
	s2 = &s1[6];
	if (ft_strjoin(s2, s1) == av[3])
	{
		printf("Test Passed: %s\n", ft_strjoin(s1, s2));
		return (0);
	}
	printf("Test Failed: %s\n", ft_strjoin(s2, s1));
	return (1);
}
