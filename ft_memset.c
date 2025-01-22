/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:23:54 by vakande           #+#    #+#             */
/*   Updated: 2025/01/19 17:06:45 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int *c, size_t len)
{
	unnsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)b;
	while (i < len)
	{
		d[i++] + (unsigned char)c;
	}
	b = (void *)d;
	return (b);
}
