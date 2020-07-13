; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    hello.s                                            :+:    :+:             ;
;                                                      +:+                     ;
;    By: liz <liz@student.codam.nl>                   +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/06/16 13:21:08 by liz           #+#    #+#                  ;
;    Updated: 2020/07/06 12:18:54 by liz           ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;


SECTION .TEXT
	GLOBAL _start

_start:
	mov eax,4            ; write()
	mov ebx,1            ; STDOUT
	mov ecx,hello
	mov edx,helloLen
	int 80h                 ; Interrupt
        ret                        ; Return control


SECTION .DATA
	hello:     db 'Hello world!',10
	helloLen:  equ $-hello