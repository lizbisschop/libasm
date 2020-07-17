; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcpy.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/08 16:10:36 by liz           #+#    #+#                  ;
;    Updated: 2020/07/15 11:25:56 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text

global	_ft_strcpy
_ft_strcpy:
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