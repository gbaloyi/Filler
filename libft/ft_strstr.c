/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:28:18 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/14 10:37:58 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*s2 == 0)
		return ((char*)s1);
	while (s1[i] != 0)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] != 0)
			j++;
		if (j == ft_strlen(s2))
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
