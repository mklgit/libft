/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirueta- <mirueta-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:05:20 by mirueta-          #+#    #+#             */
/*   Updated: 2021/08/10 16:31:17 by mirueta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	void	*ptr;

	ptr = malloc(c * s);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr, (c * s));
		return (ptr);
	}
}
