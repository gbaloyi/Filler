/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:25:07 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 09:18:41 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		c;

	c = -1;
	while (++c < (int)n)
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
	}
	return (0);
}
