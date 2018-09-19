/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:52:53 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 09:08:33 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*a;
	size_t			i;

	a = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(a + i) == (char)c)
			return ((void *)a + i);
	return (NULL);
}
