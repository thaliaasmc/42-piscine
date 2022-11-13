NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCPATH = ./srcs/

RM = rm -rf

SRCS = $(addprefix $(SRCPATH), 	\
			ft_check_format_.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_printf.c \
			ft_puthexa.c \
			ft_putptr.c \
			ft_putunbr.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

.o: .c
	gcc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
