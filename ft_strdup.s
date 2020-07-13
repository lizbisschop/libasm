; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strdup.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/07 12:04:35 by liz           #+#    #+#                  ;
;    Updated: 2020/07/13 11:34:49 by liz           ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
global	ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc

ft_strdup:
	push rdi
	call ft_strlen	;put the length of string rdi in rax
	inc rax			;increment rax with 1 for \0 byte
	mov	rdi,rax		;set the len to malloc 
	call malloc		;malloc the right amount of len
	pop rdi
	mov	rsi,rdi
	mov rdi,rax
	call ft_strcpy
	ret

