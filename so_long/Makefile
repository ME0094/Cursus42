NAME = pipex
NAME_B = pipex_bonus
LIBFT_DIR = libft
LIBFTPRINTF_DIR = libft/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a
DIR_SRCS = src/mandatory
DIR_BONUS = src/bonus
DIR_OBJS = objs

SRCS_NAMES = pipex.c main.c \
    child_processes.c dup_operations.c error_handling.c execute_command.c \
    file_operations.c util_command.c util_path.c

SRCS_BONUS_NAMES = pipex_bonus.c main_bonus.c \
    child_bonus.c dups_bonus.c validate_bonus.c \
	../mandatory/error_handling.c ../mandatory/util_command.c \
	../mandatory/util_path.c ../mandatory/file_operations.c

SRCS = $(addprefix $(DIR_SRCS)/,$(SRCS_NAMES))
SRCS_BONUS = $(addprefix $(DIR_BONUS)/,$(SRCS_BONUS_NAMES))

HEAD = -Ilibft/includes -Iincludes
CC = gcc -g -o
CFLAGS = -Wall -Werror -Wextra -g -gdwarf-2
MAKEFLAGS = --no-print-directory

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(NAME_B)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ $(LIBFT) $(HEAD) -o $@

$(NAME_B): $(SRCS_BONUS)
	$(CC) $(CFLAGS) $^ $(LIBFT) $(HEAD) -o $@

$(LIBFT):
	@make -C libft
	@make -C libft/ft_printf

clean:
	@make clean -C libft
	@make clean -C libft/ft_printf
	@rm -f $(DIR_SRCS)/*.o
	@rm -f $(DIR_BONUS)/*.o
	@rm -rf $(DIR_OBJS)
	@rm -rf $(NAME)
	@rm -rf $(NAME_B)

fclean: clean
	@make fclean -C libft
	@make fclean -C libft/ft_printf
	@rm -rf $(LIBFT)
	@rm -rf $(NAME)
	@rm -rf $(NAME_B)

re: fclean all

git:
	@git add -A
	@git commit -m "$m"
	@git push
	@echo "Commit sent to GitHub"
# Use make git m="msg to commit" to commit and push in one line

.PHONY:	all clean fclean re bonus