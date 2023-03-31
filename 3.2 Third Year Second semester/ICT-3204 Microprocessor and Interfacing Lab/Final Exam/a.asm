.model small
.stack 100h  
.code

main proc
    
    mov ah,1 
    int 21h
    mov bl,al
    
    mov cl,0
    mov ch,1
    
    add cl,48
    add ch,48
    
        mov bh,ch
        
    
        for:
       
        mov bh,ch
        add bh,cl
        sub bh,48
        
        
        mov ah,2
        mov dl,bh
        int 21h
        
        mov ah,2
        mov dl,10
        int 21h
        mov dl,13
        
        mov cl,ch
        mov ch,bh 
        
        cmp bl,'0'
        je exit:
        
        dec bl
        
        jmp for:  
        
    
      exit:
      mov ah,4ch
      int 21h
      main endp

end main