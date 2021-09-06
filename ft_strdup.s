; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strdup.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: lbisscho <lbisscho@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/08/07 14:36:47 by lbisscho      #+#    #+#                  ;
;    Updated: 2020/08/24 13:38:30 by lbisscho      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

segment.text:
    global _ft_strdup
    extern _ft_strlen
    extern _ft_strcpy
    extern _malloc
_ft_strdup:
   push rdi
   call _ft_strlen
   inc rax
   mov rdi,rax
   call _malloc
   pop rdi
   mov rsi, rdi
   mov rdi,rax
   call _ft_strcpy
   ret
