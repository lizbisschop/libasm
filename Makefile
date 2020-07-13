# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/16 13:12:56 by liz           #+#    #+#                  #
#    Updated: 2020/07/13 11:37:19 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s

MAIN = main.c

OBJ = $(SRCS:.s=.o)

INCL = libasm.h

FLAGS = gcc -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJ) $(SRCS) $(MAIN)
	ar rcs $(NAME) $(OBJ)
	gcc $(MAIN) libasm.a -no-pie -o output
%.o:%.s
	nasm -f elf64 $<

clean:
	rm -rf $(OBJ)
	rm -rf output

fclean: clean
	rm -rf $(NAME)

re: fclean all
