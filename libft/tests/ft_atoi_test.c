/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:32:46 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/15 11:34:44 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Please Input 1 Argument: (char *str)");
		return (1);
	}
	if (ft_atoi(av[1]) == atoi(av[1]))
	{
		printf("Test Passed: %d\n", ft_atoi(av[1]));
		return (0);
	}
	printf("Test Failed: %d\n", atoi(av[1]));
	return (0);
}
