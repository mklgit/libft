/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:23:05 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/17 08:49:03 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*nwstr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	nwstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nwstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		nwstr[i] = s1[i];
		i++;
	}	
	while (s2[j] != '\0')
	{
		nwstr[j + i] = s2[j];
		j++;
	}
	nwstr[j + i] = '\0';
	return (nwstr);
}
