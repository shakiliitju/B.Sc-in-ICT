.model small
.stack 100h
.data
msg1 dw 'Enter 1st number of series : $'
msg2 dw 'Enter 4th number of series : $'
msg3 dw 'Summation of series : $'
nl db 0ah,0dh,'$'
.code
main proc
 mov ax,@data
 mov ds,ax

 lea dx,msg1
 mov ah,9
 int 21h

 mov ah,1
 while:
 int 21h
 cmp al,0dh
 je end_while

 cmp al,39h
 jg letter

 and al,0fh
 jmp shift

 letter:
 sub al,37h

 shift:
 shl bh,4

 or bh,al
 jmp while

 end_while:

 lea dx,nl
 mov ah,9
 int 21h

 lea dx,msg2
 mov ah,9
 int 21h

 mov ah,1
 while2:
 int 21h
 cmp al,0dh
 je end_while2

 cmp al,39h
 jg letter2

 and al,0fh
 jmp shift2

 letter2:
 sub al,37h

 shift2:
 shl bl,4

 or bl,al
 jmp while2

 end_while2:

 lea dx,nl
 mov ah,9
 int 21h

 add bl,bh
 jc one
 jmp zero
 one:
 mov bh,1
 jmp prnt
 zero:
 mov bh,0

 prnt:
 lea dx,msg3
 mov ah,9
 int 21h

 mov ax,2
 mul bx
 mov bx,ax


 mov cx,4

 mov ah,2

 for:
 mov dl,bh
 shr dl,4
 shl bx,4

 cmp dl,10
 jge letter3

 add dl,30h
 int 21h
 jmp end_of_loop

 letter3:
 add dl,55
 int 21h

 end_of_loop:
 loop for
main endp
 end main


