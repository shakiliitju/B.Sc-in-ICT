
.stack 100h
.data

           
           Num1 db 0ah, 0dh, "Enter first Number: $"
           Num2 db 0ah, 0dh, "Enter Second Number: $"
           result db 0ah, 0dh, "Result: $"
                                             
                                             
.code

       main: 
                                             
              mov ax, @data
              mov ds, ax                               
                                             
              lea dx, Num1
              mov ah, 09h
              int 21h
              
              mov ah, 01h
              int 21h
              
              sub al, 30h
              mov bh, al
              
              mov ah,01h
              int 21h
              
              sub al, 30h
              mov bl, al
              
              
              
              
              lea dx, Num2
              mov ah, 09h
              int 21h
              
              mov ah, 01h
              int 21h
              
              sub al, 30h
              mov ch, al
              
              mov ah,01h
              int 21h
              
              sub al, 30h
              mov cl, al

                     
                     
                     
                     
              add bl, cl
              
              mov al, bl
              mov ah, 00h
              aaa    
              
              mov cl, al
              mov bl, ah
              
              add bl, bh
              add bl, ch
              
              mov al, bl
              mov ah, 00h
              aaa
              
              mov bx, ax
              
              mov dx, offset result  
              mov ah, 09h
              int 21h
              
              mov dl, bh
              add dl, 30h
              mov ah, 02h
              int 21h
              
              mov dl, bl
              add dl, 30h
              mov ah, 02h
              int 21h
              
              mov dl, cl
              add dl, 30h
              mov ah, 02h
              int 21h
               