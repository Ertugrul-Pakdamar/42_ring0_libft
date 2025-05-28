/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 08:57:17 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:20:56 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	f(unsigned int i, char *s)
{
	char	c;

	c = s[0];
	if (c >= 'A' && c <= 'Z' && i >= 1)
		s[0] = s[0] + 32;
}

int	main(void)
{
	char	*s;

	s = (char *)malloc(15);
	strcpy(s, "HELLO WORLD");
	ft_striteri(s, f);
	printf("%s\n", s);
}
