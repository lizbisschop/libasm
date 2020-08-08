; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 14:03:13 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/07 14:13:30 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_strcmp
_ft_strcmp:
    mov rax,0
_compare:
    mov al,BYTE[rdi]
    mov bl,BYTE[rsi]
    cmp al,0
    je _exit
    cmp bl,0
    je _exit
    cmp al,bl
    jne _exit
    inc rdi
    inc rsi
    jmp _compare
_exit:
    movzx rax,al
    movzx rbx,bl
    sub rax,rbx
    ret