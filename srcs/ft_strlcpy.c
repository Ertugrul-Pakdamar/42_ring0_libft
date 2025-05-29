/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:29:33 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/29 17:26:50 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	index = 0;
	while (index < size - 1 && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (len);
}
