.MODEL SMALL
.STACK 
.DATA
       A DB 'ENTER NUMBER: $'
       C DB 10,13,'ANSWER: $'
      
.CODE   

  MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AH,09
    LEA DX,A       
    INT 21H
    
    MOV AH,1
    INT 21H
    CALL CONV   
    MOV BL,AL 
    ROR BL,4  
    
    
    MOV AH,1
    INT 21H
    CALL CONV
    ADD BL,AL        
    
    
    MOV CL,3
    ROR BL,CL
                
    MOV CL,BL
             
    AND BL,0F0H
    ROR BL,4
    CALL CONV2
    
    
    MOV AH,09
    LEA DX,C
    INT 21H
    
    MOV DL,BL
    MOV AH,02
    INT 21H
    
    MOV BL,CL
    AND BL,0FH
    CALL CONV2
    
    MOV DL,BL
    MOV AH,02
    INT 21H
        
     MOV AH,4CH
     INT 21H   
        
    CONV2 PROC
        CMP BL,0aH
        JC E
        ADD BL,07H
        E: ADD BL,30H
        RET
        ENDP
    
    
    CONV PROC 
        CMP AL,40H
        JC D
        SUB AL,07H
        D: SUB AL,30H
        RET
        ENDP
       