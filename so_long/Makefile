NAME		=	so_long
NAMEB		=	so_long_bonus
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
MLX			=	mlx/Makefile.gen
LFT			=	libft/libft.a
INC			=	-I ./src -I ./libft -I ./mlx
INCB		=	-I ./bonus -I ./libft -I ./mlx
LIB			=	-L ./libft -lft -L ./mlx -lX11 -lXext -lm -lmlx -lbsd
OBJ			=	$(SRC:.c=.o)
OBJBONUS	=	$(SRCBONUS:.c=.o)
GREEN		=	\033[0;32m
RED 		=	\033[0;31m
YELLOW		=	\033[0;33m
RESET		=	\033[0m
SRC			=	src/die.c \
				src/draw.c \
				src/event.c \
				src/game_destroy.c \
				src/game_init.c \
				src/map_height.c \
				src/map_init.c \
				src/map_isvalid.c \
				src/map_parsing.c \
				src/map_read.c \
				src/map_width.c \
				src/mlx_utils.c \
				src/move_player.c \
				src/root_destroy.c \
				src/root_init.c \
				src/so_long.c \
				src/update.c

SRCBONUS	=	bonus/die_bonus.c \
				bonus/draw_bonus.c \
				bonus/event_bonus.c \
				bonus/game_destroy_bonus.c \
				bonus/game_init_bonus.c \
				bonus/map_height_bonus.c \
				bonus/map_init_bonus.c \
				bonus/map_isvalid_bonus.c \
				bonus/map_parsing_bonus.c \
				bonus/map_read_bonus.c \
				bonus/map_width_bonus.c \
				bonus/mlx_utils_bonus.c \
				bonus/move_player_bonus.c \
				bonus/root_destroy_bonus.c \
				bonus/root_init_bonus.c \
				bonus/so_long_bonus.c \
				bonus/update_bonus.c

all:		$(MLX) $(LFT) $(NAME)

$(NAME):	$(OBJ)
			@echo "$(RED)[ .. ] Compiling Mandatory..$(RESET)"
			@$(CC) $(FLAGS) -fsanitize=address -o $@ $^ $(LIB)
			@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Mandatory Ready!$(RESET)"

$(MLX):
			@echo "$(RED)[ .. ] | Compiling minilibx..$(RESET)"
			@make -s -C mlx
			@echo "$(GREEN)[ OK ]$(RESET)|$(YELLOW)Minilibx ready!$(RESET)"

$(LFT):
			@echo "$(RED)[ .. ] Compiling Libft..$(RESET)"
			@make -s -C libft
			@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Libft ready!$(RESET)"

bonus:		$(MLX) $(LFT) $(NAMEB)

$(NAMEB):	$(OBJBONUS)
			@echo "$(RED)[ .. ] Compiling Bonus..$(RESET)"
			@$(CC) $(FLAGS) -fsanitize=address -o $@ $^ $(LIB)
			@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Bonus Ready!$(RESET)"

src/%.o:	src/%.c
			@$(CC) $(FLAGS) $(INC) -o $@ -c $<

bonus/%.o:	bonus/%.c
			@$(CC) $(FLAGS) $(INCB) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) src/*.o
			@rm -rf $(OBJBONUS) bonus/*.o
			@echo "Object files removed."

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)
			@rm -rf $(NAMEB)
			@echo "Binary file removed."

re:			fclean all
re_b:			fclean bonus

.PHONY:		all clean fclean re
