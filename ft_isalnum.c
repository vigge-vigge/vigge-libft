/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:21:39 by vakande           #+#    #+#             */
/*   Updated: 2025/01/24 17:38:26 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    char *str = "Hello123 ";  // Test string

    // Call ft_isalnum and print 1 if true, 0 if false
    printf("%d\n", ft_isalnum(str));  
	// Prints 1 for alphanumeric, 0 for non-alphanumeric

    return 0;
}
*/
