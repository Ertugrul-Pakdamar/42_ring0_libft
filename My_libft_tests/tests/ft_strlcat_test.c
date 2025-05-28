/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:22:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:21:07 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	src[100];
	char	dst[100];
	char	my_res[100];
	char	sys_res[100];
	int		size;

	if (ac != 4)
		return (1);
	strcpy(dst, av[1]);
	strcpy(src, av[2]);
	size = atoi(av[3]);
	ft_strlcat((char *)0, src, size);
	strcpy(my_res, dst);
	strcpy(dst, av[1]);
	strcpy(src, av[2]);
	strlcat(dst, src, size);
	strcpy(sys_res, dst);
	if (strcmp(my_res, sys_res) == 0)
	{
		printf("Test Passed: %li\n", ft_strlcat(dst, src, size));
		return (0);
	}
	printf("Test Failed: %li\n", ft_strlcat(dst, src, size));
	return (0);
}
