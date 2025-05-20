/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:41:28 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/16 08:44:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	void	*res;
	size_t	index;

	res = (char *)malloc(nmemb * size);
	arr = (char *)res;
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
