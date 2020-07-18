# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/15 10:39:34 by lbisscho      #+#    #+#                  #
#    Updated: 2020/07/18 16:21:19 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s \

OBJ = $(SRCS:.s=.o)

NASM = nasm -fmacho64

AR = ar -rcs

MAIN = main.c

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
%.o: %.s
	$(NASM) $?
test:
	gcc main.c -I libasm.h -L. -lasm -o libasm

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
	rm -rf libasm
re: fclean all
