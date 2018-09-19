/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:10:31 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/11 16:35:53 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	size_t	len;
	size_t	count;

	count = 0;
	if (!str)
	{
		return ;
	}
	len = ft_strlen(str);
	while (count < len)
	{
		write(fd, &(str[count]), 1);
		count++;
	}
}
