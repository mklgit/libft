/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:59:57 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/17 16:23:22 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getlen(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*ptr;

	nb = n;
	len = getlen(nb);
	ptr = (char *)malloc(sizeof(*ptr) * (1 + len));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		ptr[0] = '0';
	while (nb > 0)
	{
		ptr[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}
