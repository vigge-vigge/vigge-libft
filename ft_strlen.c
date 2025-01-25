/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:32:50 by vakande           #+#    #+#             */
/*   Updated: 2025/01/25 10:45:15 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	size;

	size = 0;
	if (!s)
		return (0);
	while (s[size])
		size++;
	return (size);
}
