org 100h
 .data


 a db 0ah,0dh,"Enter 1st no :$"
 b db 0ah,0dh,"Enter 2nd no :$"
 c db 0ah,0dh,"Subtracing two numbers :$"

 .code
 mov ax,@data
 mov ds,ax
 ;input first number
 lea dx,a
 mov ah,09h
 int 21h

 mov ah,01
 int 21h
 lea dl,ah
 int 21h
 mov bl,al


 ;input second number
 lea dx,b
 mov ah,09h
 int 21h

 mov ah,01
 int 21h
 lea dl,ah
 int 21h
 mov bh,al

 sub bh,30h
 sub bl,30h

 ;third number
 lea dx,c
 mov ah,09h
 int 21h

 sub bh,bl
 add bh,30h
 mov dl,bh

 mov ah,02
 int 21h


 ret




