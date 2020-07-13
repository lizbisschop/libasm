; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcpy.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/08 16:10:36 by liz           #+#    #+#                  ;
;    Updated: 2020/07/09 11:01:15 by liz           ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text

global	ft_strcpy
ft_strcpy:
	mov rax,-1
loop:
	inc	rax
	mov dl,BYTE[rsi, rax]
	mov BYTE[rdi, rax], dl
	cmp dl,0
	je	return
	jmp loop
return:
	mov rax,rdi
	ret