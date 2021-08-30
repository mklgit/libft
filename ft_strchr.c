/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 11:26:23 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/10 15:55:23 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ((char )c))
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == '\0' && str[i] == c)
		return ((char *)&str[i]);
	return (0);
}
