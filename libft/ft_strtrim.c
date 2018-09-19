/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:05:14 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 15:47:52 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		beg;
	int		end;
	char	*string;
	char	*out;

	if (s == NULL)
		return (NULL);
	beg = 0;
	end = ft_strlen(s) - 1;
	while ((s[beg] == ' ' || s[beg] == '\n' || s[beg] == '\t') && (s[beg] != 0))
		beg++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && (s[end] != 0))
		end--;
	if (beg >= end)
		return (ft_strdup(""));
	string = ft_strnew(end - beg + 1);
	if (string)
	{
		out = string;
		while (s[beg] != 0 && beg <= end)
			*string++ = s[beg++];
		return (out);
	}
	else
		return (NULL);
}
