/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 08:35:09 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:21:12 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	f(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z' && i >= 1)
		return (c + 32);
	return (c);
}

int	main(void)
{
	char	*s;

	s = (char *)malloc(15);
	strcpy(s, "HELLO WORLD");
	printf("%s\n", ft_strmapi(s, f));
}
