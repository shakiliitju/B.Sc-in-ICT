INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H
.DATA
.CODE 

MAIN PROC 
   
    PRINT 'ENTER THREE(3) NUMBERS : ' 
    
    MOV AH,1
    INT 21H 
    MOV BH,AL
    PRINT  ' '  
     
    MOV AH,1
    INT 21H 
    MOV BL,AL
    PRINT ' ' 
    
    MOV AH,1
    INT 21H 
    MOV CL,AL
    PRINTN
    
    CMP BH,BL 
    JG SWAP1
    JMP CHEK1 
    
    SWAP1: XCHG BH,BL
    CHEK1: CMP BL,CL
    JG SWAP2
    JMP CHEK2
    
    SWAP2: XCHG BL,CL
    CHEK2: CMP BH,BL
    JG SWAP3
    JMP CHEK3
    
    SWAP3:
    XCHG BH,BL
    
    CHEK3:
    PRINT 'DESCEDING ORDER : '
    MOV DL,CL
    MOV AH,2
    INT 21H
    PRINT ' '
     
    MOV DL,BL
    MOV AH,2
    INT 21H
    PRINT ' ' 
    
    MOV DL,BH
    MOV AH,2
    INT 21H
    PRINT ' ' 
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN