; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcpy.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 13:53:27 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/07 13:55:19 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_strcpy
_ft_strcpy:
    mov rax,0
_copy:
    mov dl,BYTE[rsi + rax]
    mov BYTE[rdi + rax],dl
    cmp dl,0
    je _exit
    inc rax
    jmp _copy
_exit:
    mov rax,rdi
    ret