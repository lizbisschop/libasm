# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/07 12:19:24 by lbisscho      #+#    #+#                  #
#    Updated: 2020/08/24 12:14:47 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s \

OBJ = $(SRCS:.s=.o)

HEADER = libasm.h

COMPILE = nasm -fmacho64

GCC = gcc -Wall -Werror -Wextra

AR = ar -rcs

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.s
	$(COMPILE) $<
test:
	$(GCC) main.c -I libasm.h -L. -lasm -o libasm
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
	rm -rf libasm
re: fclean all

.PHONY: all clean fclean re