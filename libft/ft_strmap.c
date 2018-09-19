/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:17:20 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/08 16:10:11 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*gloria;

	if (s == NULL)
		return (NULL);
	gloria = ft_strnew(ft_strlen(s));
	if (gloria == '\0')
		return (NULL);
	i = 0;
	while (s[i])
	{
		gloria[i] = f(s[i]);
		i++;
	}
	return (gloria);
}
