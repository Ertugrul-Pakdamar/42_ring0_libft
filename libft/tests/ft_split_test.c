/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:57:54 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/18 14:40:53 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	**result;
	int		index;

	s = malloc(12);
	strcpy(s, "aaacaaacaaa");
	result = ft_split(s, 'c');
	index = 0;
	while (result[index])
	{
		printf("%s\n", result[index]);
		index++;
	}
}
