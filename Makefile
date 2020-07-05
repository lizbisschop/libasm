# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/16 13:12:56 by liz           #+#    #+#                  #
#    Updated: 2020/06/30 12:18:56 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s

MAIN = main.c

OBJ = $(SRCS:.s=.o)

INCL = libasm.h

FLAGS = gcc -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJ) $(SRCS)
	$(FLAGS) -C $(OBJ) -o $(NAME)
	# $(FLAGS) $(OBJ) $(INCL) -o $(NAME) -g
%.o:%.s
	nasm -f elf64 $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
