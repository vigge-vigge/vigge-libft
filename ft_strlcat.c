/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:38:37 by vakande           #+#    #+#             */
/*   Updated: 2025/01/25 11:12:45 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dest);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size -1)
		dest[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len_dst);
}
