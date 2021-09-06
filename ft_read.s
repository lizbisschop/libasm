; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_read.s                                          :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 16:10:09 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/24 13:33:19 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_read
    extern ___error
_ft_read:
    mov rax,0x2000003
    syscall
    jc _error_handle
    ret
_error_handle:
    mov rdi,rax
    push rdi
    call ___error
    mov [rax],rdi
    pop rdi
    mov rax,-1
    ret