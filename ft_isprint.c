/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:13:19 by vakande           #+#    #+#             */
/*   Updated: 2025/01/17 16:28:10 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    char *str1 = "Hello, World!";  // All printable characters
    char *str2 = "Hello\tWorld!";  // Contains a tab (non-printable)
    char *str3 = "Hello\x80World!"; // Contains a non-ASCII character

    printf("str1: %d\n", ft_isprint(str1));
	// Should print 1 (all printable)
    printf("str2: %d\n", ft_isprint(str2));
	// Should print 0 (contains a tab)
    printf("str3: %d\n", ft_isprint(str3));
	// Should print 0 (contains non-ASCII char)

    return 0;
}
*/
