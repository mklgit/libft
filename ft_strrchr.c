/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:48:51 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/10 16:03:05 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;

	i = ft_strlen((char *)str);
	if (str[i] == '\0' && str[i] == (char )c)
		return ((char *)&str[i]);
	while (i > 0)
	{
		if (str[i] == (char )c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == (char )c)
		return ((char *)&str[i]);
	return (NULL);
}
