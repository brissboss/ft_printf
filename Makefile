SRCS	=	ft_printf.c				\
			src/ft_bin_hex.c		\
			src/ft_putnbr_base_fd.c	\
			src/ft_putuns_fd.c		\
			src/ft_putnbr_pr_fd.c	\

OBJS	= $(SRCS:.c=.o)

GCC		=	gcc

RM		=	rm -rf

FLAGS	=	-Wall -Werror -Wextra

NAME	=	libftprintf.a

.c.o:
		$(GCC) $(FLAGS) -c -I./src $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
			$(MAKE) -C Libft
			cp Libft/libft.a $(NAME)
			ar rcs $@ $^

all:		$(NAME)

clean:
			$(MAKE) clean -C Libft
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C Libft
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
