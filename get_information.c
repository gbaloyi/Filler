/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_information.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:27:49 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/23 13:45:27 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void	get_num_player(t_information *information)
{
	char	*line;

	get_next_line(0, &line);
	information->nbr = ft_atoi(&line[10]);
}

void	get_letter(t_information *information)
{
	if (information->nbr == 1)
	{
		information->letter = 'O';
	}
	else
	{
		information->letter = 'X';
	}
}

void	get_h_and_w(t_information *information)
{
	char	*line;

	get_next_line(0, &line);
	information->map_column = ft_atoi(&line[8]);
	information->map_row = ft_atoi(&line[11]);
}

void	get_information(t_information *information)
{
	get_num_player(information);
	get_letter(information);
	get_h_and_w(information);
}
