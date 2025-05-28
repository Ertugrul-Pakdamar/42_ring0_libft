/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:04:12 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:21:16 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[100];
	char	s2[100];

	strcpy(s1, "Hello \20world");
	strcpy(s2, "Hello \0world !");
	if (ft_strncmp(s1, s2, 20) == strncmp(s1, s2, 20))
	{
		printf("Test Passed: %d\n", ft_strncmp(s1, s2, 20));
		return (0);
	}
	printf("Test Failed: %d\n", ft_strncmp(s1, s2, 20));
	return (1);
}
