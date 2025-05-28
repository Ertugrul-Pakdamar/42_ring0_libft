/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:41:28 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/27 17:47:23 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	void	*res;
	size_t	index;

	res = (void *)malloc(nmemb * size);
	arr = (void *)res;
	if (arr == NULL)
		return (NULL);
	index = 0;
	while (index < nmemb * size)
	{
		arr[index] = 0;
		index++;
	}
	return (arr);
}
