NAME			=	pipex
NAME_B			=	pipex_bonus
LIBFT			=	libft.a libftprintf.a
DIR_SRCS		=	src/mandatory
DIR_BONUS		=	src/bonus
DIR_OBJS		=	objs
SRCS_NAMES		= 	pipex.c \
					utils.c 
SRCS_NAMES_B	=	pipex_bonus.c \
					utils_bonus.c 

SRCS            =   $(addprefix $(DIR_SRCS)/,$(SRCS_NAMES))
SRCS_B          =   $(addprefix $(DIR_BONUS)/,$(SRCS_NAMES_B))
OBJS            =   $(SRCS:.c=.o)
OBJS_B          =   $(SRCS_B:.c=.o)
HEAD			=	-Ilibft/includes -Iincludes
CC				=	clang
CFLAGS			=	-Wall -Werror -Wextra -g
MAKEFLAGS		=	--no-print-directory

all: ${NAME}

${NAME}: $(OBJS)
	@make -C libft
	@make -C libft/ft_printf
	@cp libft/libft.a libft/ft_printf/libftprintf.a .
	$(CC) $(CFLAGS) $(OBJS) ${LIBFT} ${HEAD} -o $(NAME)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c | $(DIR_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)

bonus: ${NAME_B}

${NAME_B}: $(OBJS_B)
	@make -C libft
	@make -C libft/ft_printf
	@cp libft/libft.a libft/ft_printf/libftprintf.a .
	$(CC) $(CFLAGS) $(OBJS_B) ${LIBFT} ${HEAD} -o $(NAME_B)

$(DIR_OBJS)/%.o: $(DIR_BONUS)/%.c | $(DIR_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

clean:
	@make clean -C libft
	@make clean -C libft/ft_printf
	@rm -rf ${OBJS}
	@rm -rf ${DIR_OBJS}

fclean:	clean
	@make fclean -C libft
	@make fclean -C libft/ft_printf
	@rm -rf ${LIBFT}
	@rm -rf ${NAME}
	@rm -rf ${NAME_B}

re:	fclean all

git:
	@git add -A
	@git commit -m "$m"
	@git push
	@echo "Commit sent to GitHub"
# Use make git m="msg to commit" to commit and push in one line

val: all
	valgrind -s -q --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)
	valgrind -s -q --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME_B)
	valgrind -s -q --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes --trace-children=yes ./pipex

#/check:
#   clang-tidy -checks=-*,readability-*,performance-*, portability-*,modernize-*,security-*,misc-*,clang-diagnostic-*,header-check -fix -header-check-option=-Werror -p .
#/

.PHONY:	all clean fclean re bonus