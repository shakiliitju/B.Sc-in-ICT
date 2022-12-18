include 'emu8086.inc'
.model small
.stack 100h
.code
.data
main proc 
    
    print 'sum of two number:'
    

      mov ah,01h
      int 21h
      
      mov bl,al
      sub bl,48
      int 21h
      
      sub al,48 
      add bl,al
      
      mov dl,bl 
      add dl,48
      
      mov ah,02h
      int 21h  
      
      
      printn
      print 'sub of two number:'

    
      mov ah,01h
      int 21h
      
      mov bl,al
      sub bl,48
      int 21h
      
      sub al,48        
      sub bl,al
      
      mov dl,bl 
      add dl,48 
      
      mov ah,02h
      int 21h
              
      printn        
      print 'mul of two number:' 
    
      mov ah,01h
      int 21h
      
      mov bl,al
      sub bl,48
      int 21h
      
      sub al,48
                
      mul bl
      mov bl,al 
      
      mov ah,02h
      mov dl,bl 
      add dl,48 
      int 21h  
      
    
    main endp
end main

