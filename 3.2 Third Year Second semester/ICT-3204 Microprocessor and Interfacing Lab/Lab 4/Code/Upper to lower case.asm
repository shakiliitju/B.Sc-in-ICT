org 100h
.model small
.data 
     msg1 db 13,10, "Enter upper case: $"
     msg2 db 13,10, "lower case: $"
.code 
main proc
    
    mov ax,@data
    mov dx,ax
    
    mov dx,offset msg1
    
    mov ah,9
    int 21h

    mov ah,1
    int 21h 

    mov bl,al

    add bl,32
    ;sub bl,32

    mov ax,@data
    mov dx,ax
    
    mov dx,offset msg2
    
    mov ah,9
    int 21h

    mov dl,bl

    mov ah,2
    int 21h

    mov ah,4ch
    int 21h
    
    
  main endp
end main

ret


