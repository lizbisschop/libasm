# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    hello_world.s                                      :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/16 13:21:08 by liz           #+#    #+#                  #
#    Updated: 2020/06/17 11:34:25 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


section .text
global _start
_start:

	mov edx,len
	mov ecx,msg
	mov ebx,1
	mov eax,4
	int 0x80
	mov eax,1
	int 0x80

section .data
msg db 'hello_world!', 0xa
len equ $ -msg