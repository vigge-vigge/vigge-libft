/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakande <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:59:14 by vakande           #+#    #+#             */
/*   Updated: 2025/01/25 15:06:30 by vakande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*enleve_first_blanks(char *trim)
{
	int		i;
	char	*trim_copy;

	i = 0;
	while (trim[i] == ' ' || trim[i] == '\n' || trim[i] == '\t')
		i++;
	trim_copy = &trim[i];
	return (trim_copy);
}

static size_t	calcule_taille(char *trim)
{
	size_t		size;

	size = ft_strlen(trim);
	if (size == 0)
		return (size);
	while (trim[size] == ' ' || trim[size] == '\t'
		|| trim[size] == '\n' || trim[size] == '\0')
		size--;
	return (size + 1);
}

char	*ft_strtrim(char const *s)
{
	char		*trim;
	char		*res;
	size_t		size;

	if (!s)
		return (NULL);
	trim = (char *)s;
	size = 0;
	if (*trim != '\0')
	{
		trim = enleve_first_blanks(trim);
		size = calcule_taille(trim);
	}
	res = (char *)malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	res = ft_strncpy(res, trim, size);
	res[size] = '\0';
	return (res);
}
