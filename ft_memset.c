/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:23:37 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/05 09:56:39 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t i)
{
	size_t			n;
	unsigned char	*s;

	s = str;
	n = 0;
	while (n < i)
	{
		s[n] = (unsigned char)c;
		n++;
	}
	return (s);
}
