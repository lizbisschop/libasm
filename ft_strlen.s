; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strlen.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 12:28:55 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/07 12:31:23 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
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