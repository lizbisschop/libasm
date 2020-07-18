; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_read.s                                          :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/07/18 14:55:23 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/07/18 15:52:10 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment .text
	global _ft_read
    extern ___error

; ft_read (rdi, rsi, rdx)
_ft_read:
	mov 	rax, 0x2000003	; set call to read
	syscall					; call rax (read)
		jc exit_error		; if doesn't work, read set flags carry to 1 so jmp exit error
    ret
exit_error:
    mov rax,rdi
    push rdi
    call ___error
    pop rdi
    mov [rax],rdi
	mov 	rax, -1			; set return to -1s
	ret						; return
	