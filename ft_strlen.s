; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strlen.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/06 12:19:13 by liz           #+#    #+#                  ;
;    Updated: 2020/07/18 17:24:04 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
 global _ft_strlen

_ft_strlen:
 mov rax,0
 jmp count

count:
 cmp BYTE [rdi + rax], 0
 je exit
 inc rax
 jmp count

exit:
 ret
	