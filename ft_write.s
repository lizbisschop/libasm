; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_write.s                                         :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 15:18:06 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/24 11:32:39 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_write
    extern ___error
_ft_write:
    mov rax,0x2000004
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
