/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:54:50 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/15 10:00:17 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	str[100];
	char	c;

	if (ac != 3)
	{
		printf("Please Input 2 Arguments: (char *s, char c)\n");
		return (1);
	}
	c = av[2][0];
	strcpy(str, av[1]);
	if (ft_strchr(str, c) == strchr(str, c))
	{
		printf("Test Passed: %s\n", ft_strchr(str, c));
		return (0);
	}
	printf("Test Failed: %s\n", ft_strchr(str, c));
	return (1);
}
