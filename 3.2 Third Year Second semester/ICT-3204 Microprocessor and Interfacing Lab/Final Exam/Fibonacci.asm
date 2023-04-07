 data segment 
    
data ends

code segment  
    assume cs:code,ds:data
    start:
    
    mov bh,0h
    ;add al,32h
    mov bl,1h 
    ;add bl,32h
    
    mov dl,bh
    add dl,30h
    mov ah,02h
    int 21h
    
    mov cl,6
    
    top:  
    xor ax,ax
    mov al,bh
     add bh,bl 
     mov bl,al
     mov dl,bh
     call pr
     
    loop top  
    mov ah,4ch
    int 21h
    
       
       pr proc
        add dl,30h
        mov ah,02h
       int 21h
    ret
    
     
    
    
code ends
end start