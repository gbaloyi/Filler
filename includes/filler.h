/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:58:49 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/20 10:50:56 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define BUFF_SIZE 32
# include "../libft/libft.h"

typedef	struct	s_information
{
	int			nbr;
	int			map_column;
	int			map_row;
	int			count;
	int			finish;
	char		letter;
	char		**map;
}				t_information;

typedef	struct	s_piece
{
	int			column;
	int			row;
	int			x;
	int			y;
	char		**piece;
}				t_piece;

void			move_bottom(t_information *information, t_piece *piece);
void			place(t_information *information, t_piece *piece);
void			get_information(t_information *information);
void			get_map(t_information *information, t_piece *piece);
int				check_piece_ft(t_information *information,
		t_piece *piece, int x, int y);
int				player(t_information *information, t_piece *piece);
int				get_next_line(const int fd, char **line);

#endif
