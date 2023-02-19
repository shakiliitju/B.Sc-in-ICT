.MODEL SMALL   
.STACK
.DATA    
    
    a db 0dh,0ah,"Enter Number a: $"
    b db 0dh,0ah,"Enter Number b: $"
    result db 0dh,0ah,"The Result is: $"


.CODE

 mov ax,@Data 
 mov DS,ax

 mov dx,offset b
 mov ah,09h
 int 21h

 mov ah,01h 
 int 21h

 sub al,30h 
 mov bl,al
 
 mov dx,offset a
 mov ah,09h
 int 21h   
 
 mov ah,01h 
 int 21h
 sub al,30h
           
 mov dx,offset result
 mov ah,09h
 int 21h
 
 CMP bl,al
 JGE 2SC
 JL 1SC
 
 2SC:
 NOT al
 ADD al,1
 mov dl,al
 jmp exit:
 
 1SC:
 NOT al
 mov dl,al
 jmp exit:
 
 exit:
 mov ah,02
 int 21h
       
       