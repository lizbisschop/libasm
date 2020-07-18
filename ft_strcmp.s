; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/08 17:45:41 by liz           #+#    #+#                  ;
;    Updated: 2020/07/18 12:50:53 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
	global	_ft_strcmp
_ft_strcmp:
	mov rax,0
compare:
	mov al,BYTE[rdi]
	mov bl,BYTE[rsi]
	cmp al,0
	je exit
	cmp bl,0
	je exit
	cmp al,bl
	jne exit
	inc rdi
	inc rsi
	jmp compare
exit:
	movzx rax,al
	movzx rbx,bl
	sub rax,rbx
	ret
