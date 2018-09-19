/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:57:20 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/20 10:42:55 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void	get_piece(t_piece *piece)
{
	char	*line;
	char	*piece_join;
	int		i;
	int		line_nbr;

	i = 0;
	piece_join = "\0";
	line_nbr = 0;
	get_next_line(0, &line);
	while (ft_isdigit(line[i]) == 0)
		i++;
	piece->column = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]) == 1)
		i++;
	i++;
	piece->row = ft_atoi(&line[i]);
	while (get_next_line(0, &line) > 0)
	{
		piece_join = ft_strjoin(piece_join, line);
		piece_join = ft_strjoin(piece_join, "\n");
		line_nbr++;
		if (line_nbr == piece->column)
			break ;
	}
	piece->piece = ft_strsplit(piece_join, '\n');
}

void	get_map(t_information *information, t_piece *piece)
{
	char	*line;
	char	*map_join;
	int		line_nbr;

	map_join = "\0";
	line_nbr = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (ft_isdigit(line[0]) == 1)
		{
			map_join = ft_strjoin(map_join, &line[4]);
			map_join = ft_strjoin(map_join, "\n");
			line_nbr++;
		}
		if (line_nbr == information->map_column)
			break ;
	}
	information->map = ft_strsplit(map_join, '\n');
	get_piece(piece);
}
