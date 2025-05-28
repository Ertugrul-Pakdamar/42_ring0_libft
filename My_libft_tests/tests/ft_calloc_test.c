/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:35:24 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:19:58 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	void	*d1;
	void	*d2;
	int		size;
	int		nmemb;

	size = sizeof(int);
	nmemb = 20;
	d1 = ft_calloc(nmemb, size);
	d2 = calloc(nmemb, size);
	if (memcmp(d1, d2, nmemb * size) == 0)
	{
		printf("Test Passed: %p\n", d1);
		return (0);
	}
	printf("Test Failed: %p\n", d1);
	return (1);
}
