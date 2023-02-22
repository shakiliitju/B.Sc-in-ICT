include 'emu8086.inc'
.model small
.stack 100h
.code
.data
main proc 
    
    print 'Enter a number: '
    

      mov ah,01h
      int 21h
      
      mov bl,al
      sub bl,48
      
      sub al,48 
      add bl,al
      
      mov dl,bl 
      add dl,48
      
      mov ah,02h
      int 21h  
        
      
    
    main endp
end main

