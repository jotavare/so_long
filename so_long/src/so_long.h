/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 02:53:02 by jotavare          #+#    #+#             */
/*   Updated: 2023/01/17 02:53:30 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <mlx.h>
# include "libft.h"

/*
** minilibx builds its images as a struct whose first members are the ones
** below. mlx_get_pixel() and mlx_draw_pixel() write into that buffer directly,
** so only this prefix has to be described here. Including <mlx_int.h> to get
** the full definition is not an option: it redeclares mlx_new_image() and
** mlx_get_color_value() with a concrete t_xvar * where <mlx.h> uses void *,
** and the two prototypes do not agree.
*/
typedef struct s_img
{
	void			*image;
	unsigned long	pix;
	void			*gc;
	int				size_line;
	int				bpp;
	int				width;
	int				height;
	int				type;
	int				format;
	char			*data;
}				t_img;

typedef struct s_coord
{
	int				x;
	int				y;
}				t_coord;

typedef struct s_game
{
	int				**map;
	int				height;
	int				width;
	t_coord			player;
	int				player_up;
	int				player_down;
	int				player_left;
	int				player_right;
	int				player_move;
	int				player_coll;
	t_coord			exit;
	t_coord			*coll;
	int				count_coll;
	int				count_exit;
	int				count_player;
}				t_game;

typedef struct s_root
{
	void			*mlx;
	void			*mlx_win;
	t_img			*mlx_img;
	t_game			*game;
	t_img			*player;
	t_img			*exit;
	t_img			*coll;
	t_img			*wall;
	t_img			*ground;
}				t_root;

void			die(char *errmsg, int errnum);

void			draw(t_root *root);

int				key_press(int keycode, t_root *root);
int				key_release(int keycode, t_root *root);
int				destroy_hook(t_root *root);

void			game_destroy(t_game *game);

void			game_init(t_root *root, char *filename);

void			map_height(t_root *root, char *file);

void			map_init(t_root *root, char *filename);

void			map_isvalid(t_root *root, char *file);

void			map_parsing(t_root *root, char *file);

void			map_read(t_root *root, char *file);

void			map_width(t_root *root, char *file);

unsigned int	mlx_get_pixel(t_img *img, int x, int y);
void			mlx_draw_pixel(t_img *mlx_img, int x, int y, int color);
unsigned int	mlx_rgb_to_int(int o, int r, int g, int b);

void			move_up(t_root *root, int x, int y);
void			move_down(t_root *root, int x, int y);
void			move_left(t_root *root, int x, int y);
void			move_right(t_root *root, int x, int y);

void			root_destroy(t_root *root, char *errmsg, int errnum);

t_root			*root_init(char *filename);

void			update(t_root *root);

#endif
