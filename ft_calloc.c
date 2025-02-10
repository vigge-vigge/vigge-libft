/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:28:30 by vakande           #+#    #+#             */
/*   Updated: 2025/02/10 14:28:41 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	s;

	s = count * size;
	tmp = malloc(s);
	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	if (tmp == NULL)
		return (NULL);
	else
		ft_bzero (tmp, s);
	return (tmp);
}
