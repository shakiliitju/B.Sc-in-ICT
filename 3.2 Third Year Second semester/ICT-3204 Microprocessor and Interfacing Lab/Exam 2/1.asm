INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H
.DATA   
.CODE

MAIN PROC
      
    PRINT 'ENTER THE VALUE OF A : '
    MOV AH,1
    INT 21H
    SUB AL,48
    MOV BL,5H
    
    DIV BL  
    
    ADD AL,7
    
    PRINTN
    PRINT 'OUTPUT : '
    MOV BL,AL
    MOV CL,AL
    AND BL,0F0H
    ROR BL,4
    ADD BL,48
    
    MOV DL,BL
    MOV AH,2
    INT 21H
    
    AND CL,0FH
    
    ADD CL, 48
    MOV DL,CL
    MOV AH,2
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN