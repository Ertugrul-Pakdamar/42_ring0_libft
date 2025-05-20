/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:13:36 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:21:21 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[100];
	char	to_find[100];
	int		size;

	strcpy(str, "Hello World");
	strcpy(to_find, "ell");
	size = 20;
	if (ft_strnstr(str, to_find, size) == &str[1])
	{
		printf("Test Passed: %s\n", ft_strnstr(str, to_find, size));
		return (0);
	}
	printf("Test Failed: %s\n", ft_strnstr(str, to_find, size));
	return (1);
}
