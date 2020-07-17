; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strdup.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/07 12:04:35 by liz           #+#    #+#                  ;
;    Updated: 2020/07/15 15:32:02 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
global	_ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

_ft_strdup:
	push rdi
	call _ft_strlen	;put the length of string rdi in rax
	inc rax			;increment rax with 1 for \0 byte
	mov	rdi,rax		;set the len to malloc 
	call _malloc		;malloc the right amount of len
	pop rdi
	mov	rsi,rdi
	mov rdi,rax
	call _ft_strcpy
	ret
