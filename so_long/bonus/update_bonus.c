/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 02:50:56 by jotavare          #+#    #+#             */
/*   Updated: 2023/01/17 02:50:56 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	had_move(t_root *root, int x, int y)
{
	char	*mvs;
	char	*str;

	str = "Moves: ";
	mvs = ft_itoa(root->game->player_move);
	if (root)
	{
		if (root->game->player.x != x || root->game->player.y != y)
			root->game->player_move++;
		mlx_clear_window(root->mlx, root->mlx_win);
		mlx_string_put(root->mlx, root->mlx_win, root->game->width * 40.5,
			root->game->height * 5, 0x00FF0000, str);
		mlx_string_put(root->mlx, root->mlx_win, root->game->width * 44,
			root->game->height * 5, 0x00FFFFFF, mvs);
		free(mvs);
	}
}

static void	iscollectable(t_root *root)
{
	int				k;

	k = 0;
	while (k < root->game->count_coll)
	{
		if (root->game->coll[k].x == root->game->player.x
			&& root->game->coll[k].y == root->game->player.y)
		{
			root->game->coll[k].x = -1;
			root->game->coll[k].y = -1;
			root->game->player_coll++;
		}
		k++;
	}
}

static void	isenemy(t_root *root)
{
	int				z;

	z = 0;
	while (z < root->game->count_enemy)
	{
		if (root->game->enemy[z].x == root->game->player.x
			&& root->game->enemy[z].y == root->game->player.y)
		{
			ft_putstr_fd("You touched an enemy.\n", 1);
			ft_putstr_fd("Try again.\n", 1);
			root_destroy(root, 0, 0);
		}
		z++;
	}
}

static void	exit_anim(t_root *root)
{
	if (root->game->exit.x == root->game->player.x
		&& root->game->exit.y == root->game->player.y)
	{
		if (root->game->count_coll == root->game->player_coll)
		{
			ft_putstr_fd("You win!\n", 1);
			root_destroy(root, 0, 0);
		}
	}
}

void	update(t_root *root)
{
	int				x;
	int				y;

	x = root->game->player.x;
	y = root->game->player.y;
	if (root->game->player_up != 0)
		move_up(root, x, y);
	else if (root->game->player_down != 0)
		move_down(root, x, y);
	else if (root->game->player_left != 0)
		move_left(root, x, y);
	else if (root->game->player_right != 0)
		move_right(root, x, y);
	had_move(root, x, y);
	iscollectable(root);
	draw(root);
	isenemy(root);
	exit_anim(root);
}
