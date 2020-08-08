; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_read.s                                          :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 16:10:09 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/08 13:42:06 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_read
    extern ___error
_ft_read:
    mov rax,0x2000003
    syscall
    jc _error_handle ;carry flag is on, so the syscall has over flown?? this means an error occured
    ret
_error_handle:
    mov rdi,rax
    push rdi
    call ___error
    pop rdi
    mov [rax],rdi
    mov rax,-1
    ret