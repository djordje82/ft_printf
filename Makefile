NAME = libftprintf.a

HEAD = ft_printf.h

SRC = ft_printf.c \
		ft_print_c.c \
		ft_print_d.c \
		ft_print_p.c \
		ft_print_s.c \
		ft_print_u.c \
		ft_print_x.c

OBJS := ${SRC:.c=.o}
CC = cc
CCFLAGS = -Werror -Wall -Wextra -g
RM = rm -f
AR = ar rcs

all: ${NAME}

${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}

%.o: %.c
		${CC} ${CCFLAGS} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re