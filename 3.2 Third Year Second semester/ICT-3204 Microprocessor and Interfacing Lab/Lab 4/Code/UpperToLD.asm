
.model small
.stack 100h
.data

msg db 'Enter a Digit:$'
msg2 db 'Lower Case is:$'
msg3 db 'Decimal Digit is:$'





.code

main proc
    
    mov ax,@DATA
    mov ds,ax;
    lea dx,msg
    mov ah,9
    int 21h
    
    mov ah,1
    int 21h 
    
    mov bl,al
    
   
    
    cmp bl,'0'
    cmp bl,'9'
    jb l2
    ja l1
    je l2 
      
    jmp lower
    
   
    lower:
   
      mov ah,2
      mov dl,0dh
      int 21h
      mov dl,0ah
      int 21h
      
      mov cl,bl 
   
       lea dx,msg2
       mov ah,9
       int 21h
       add cl,32d
       mov dl,cl
       mov ah,2 
       int 21h
       
       cmp bl,'F' 
       jmp l3
       
       
   l1:
   
     jmp lower 
     cmp bl,'A'
     ja l3
     je l3
     cmp bl,'F'
     jb l3
     je l3
    
     
   l3:
    
      mov ah,2
      mov dl,0dh
      int 21h
      mov dl,0ah
      int 21h 
      
      lea dx,msg3
       mov ah,9
       int 21h
       mov dl,49d
       mov ah,2
       int 21h
       
      
       sub bl,17d
       mov dl,bl
       mov ah,2
       int 21h 
       
       jmp exit
    
    l2:
    
      mov ah,2
      mov dl,0dh
      int 21h
      mov dl,0ah
      int 21h 
      
      lea dx,msg3
      mov ah,9
      int 21h
    
      mov dl,bl
      mov ah,2
      int 21h  
      
      
      exit: