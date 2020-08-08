; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp_2.s                                      :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/15 15:24:01 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/07/15 15:29:43 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
global _ft_strcmp
_ft_strcmp:
    mov rax,0
loop:
    mov bl,BYTE[rdi]
    mov al,BYTE[rsi]
    cmp bl,0
    je exit
    cmp al,0
    je exit
    cmp bl,al
    jne exit
    inc rdi
    inc rsi
    jmp loop
exit:
    movzx rax,bl
    movzx rbx,al
    sub rax,rbx
    ret