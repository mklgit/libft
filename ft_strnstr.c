/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:00:40 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/03 19:07:35 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	c;

	if (s2[0] == '\0')
		return ((char *) s1);
	i = 0;
	while (s1[i] != '\0')
	{
		c = 0;
		while (s2[c] != '\0' && s1[i + c] == s2[c]
			&& s1[i + c] != '\0' && (i + c) < n)
			c++;
		if (s2[c] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
