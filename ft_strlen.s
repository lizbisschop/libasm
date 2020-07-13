; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strlen.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/06 12:19:13 by liz           #+#    #+#                  ;
;    Updated: 2020/07/09 14:04:19 by liz           ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
 global ft_strlen

ft_strlen:
 xor rax,rax
 jmp count

count:
 cmp BYTE [rdi + rax], 0
 je exit
 inc rax
 jmp count

exit:
 ret
	