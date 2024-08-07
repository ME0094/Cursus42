NAME			=	push_swap
NAME_B			=	checker
LIBFT			=	libft.a libftprintf.a
DIR_SRCS		=	srcs/push_swap
DIR_BONUS		=	srcs/checker
DIR_OBJS		=	objs
SRCS_NAMES		= 	free.c \
					init.c \
					movements_a.c \
					movements_b.c \
					movements_both.c \
					parse.c \
					sort.c \
					sort2.c \
					stack.c \
					utils.c \
					push_swap.c
SRCS_NAMES_B	=	

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
	@echo "\033[34;5mpush_swap mandatory\033[0m"

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c | $(DIR_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)

bonus: ${NAME_B}

${NAME_B}: $(OBJS_B)
	@make -C libft
	@make -C libft/ft_printf
	@cp libft/libft.a libft/ft_printf/libftprintf.a .
	$(CC) $(CFLAGS) $(OBJS_B) ${LIBFT} ${HEAD} -o $(NAME_B)
	@echo "\033[39;5mpush_swap bonus\033[0m"

$(DIR_OBJS)/%.o: $(DIR_BONUS)/%.c | $(DIR_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

clean:
	@make clean -C libft
	@make clean -C libft/ft_printf
	@rm -rf ${DIR_OBJS}

fclean:	clean
	@make fclean -C libft
	@make fclean -C libft/ft_printf
	@rm -rf ${LIBFT}
	@rm -rf ${NAME}
	@rm -rf ${NAME_B}

re:	fclean all

.PHONY:	all clean fclean re bonus