/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:43:06 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/13 11:56:22 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	index;

	ptr = s;
	index = 0;
	while (index < n)
	{
		ptr[index] = (char)c;
		index++;
	}
	return (ptr);
}
