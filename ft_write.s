; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_write.s                                         :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/15 13:24:19 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/07/15 15:37:51 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
global _ft_write
_ft_write:
    mov eax,0x2000004
    syscall
    ret
