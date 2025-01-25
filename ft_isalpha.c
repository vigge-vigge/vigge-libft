/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:32:45 by vakande           #+#    #+#             */
/*   Updated: 2025/01/24 16:54:59 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
	{
		return (0);
	}
	return (1);
}
/*
int	main(){

	printf("%d\n", ft_isalpha('2'));

	return (0);
}
*/
