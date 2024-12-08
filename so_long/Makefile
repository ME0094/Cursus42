NAME = so_long
LIBFT_DIR = libft
LIBFTPRINTF_DIR = libft/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a
DIR_SRCS = src
DIR_OBJS = objs

SRCS_NAMES = main.c \
    game_init.c map_parser.c \
    movements.c render.c utils.c

SRCS = $(addprefix $(DIR_SRCS)/,$(SRCS_NAMES))

HEAD = -Ilibft/includes -Iincludes
CC = gcc -g -o
CFLAGS = -Wall -Werror -Wextra -g -gdwarf-2
MAKEFLAGS = --no-print-directory

all: $(LIBFT) $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ $(LIBFT) $(HEAD) -o $@

$(LIBFT):
	@make -C libft
	@make -C libft/ft_printf

clean:
	@make clean -C libft
	@make clean -C libft/ft_printf
	@rm -f $(DIR_SRCS)/*.o
	@rm -rf $(DIR_OBJS)
	@rm -rf $(NAME)

fclean: clean
	@make fclean -C libft
	@make fclean -C libft/ft_printf
	@rm -rf $(LIBFT)
	@rm -rf $(NAME)

re: fclean all

git:
	@git add -A
	@git commit -m "$m"
	@git push
	@echo "Commit sent to GitHub"
# Use make git m="msg to commit" to commit and push in one line

.PHONY:	all clean fclean re