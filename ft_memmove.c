/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:03:36 by vakande           #+#    #+#             */
/*   Updated: 2025/01/20 15:03:51 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		while (i < len)
		{
			a[len - 1] = b[len - 1];
			len --;
		}
	}
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}
