include 'emu8086.inc'

data segment
    num1 db 0
    num2 db 0
    num3 db 0
data ends

code segment
    assume cs:code,ds:data
start:
    mov ax,data
    mov ds,ax
    
    print 'Enter First Number: '
    
    mov ah,01h
    int 21h
    mov num1,al
    
    printn ''
    print 'Enter Second Number: '
    
    mov ah,01h
    int 21h
    mov num2,al
    
    printn ''
    print 'Enter Third Number: '
    
    mov ah,01h
    int 21h
    mov num3,al
    
    mov al,num1
    mov bl,num2
    cmp al,bl
    jg swap1
    mov num1,bl
    mov num2,al
    
swap1:
    mov al,num2
    mov bl,num3
    cmp al,bl
    jg swap2
    mov num2,bl
    mov num3,al
    
swap2:
    mov al,num1
    mov bl,num2
    cmp al,bl
    jg display
    mov num1,bl
    mov num2,al
    
display:
    printn ''
    print 'Sorted: '
    
    mov dl,num1
    mov ah,02h
    int 21h
    
    print ' '
    
    mov dl,num2
    mov ah,02h
    int 21h
    
    print ' '
    
    mov dl,num3
    mov ah,02h
    int 21h
    
    printn ''
    
    mov ah,4ch
    int 21h
    
    code ends
end start