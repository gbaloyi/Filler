/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:16:55 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/08 10:44:15 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;

	cpy = NULL;
	cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (cpy != NULL)
		ft_strcpy(cpy, src);
	return (cpy);
}
