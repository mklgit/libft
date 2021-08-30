/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:26:59 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/18 18:18:54 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	if (ss == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((ft_strlen(ss) + 1)));
	if (!ss || !f || !str)
		return (NULL);
	while (i < ft_strlen(ss))
	{
		str[i] = f(i, ss[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
