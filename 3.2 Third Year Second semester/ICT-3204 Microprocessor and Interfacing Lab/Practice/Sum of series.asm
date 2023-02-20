INCLUDE 'EMU8086.INC' 
.MODEL SMALL
.STACK 100H
.DATA
 
   FT DB 0
   DIF DB 0
 
.CODE
       
       MAIN PROC 
       MOV AX,@DATA
       MOV DS,AX
       
       PRINT 'ENTER FIRST TERM = '
       
       MOV AH,1
       INT 21H
       SUB AL,48
       MOV FT,AL
       
       PRINTN
       PRINT 'ENTER DIFFERENCE  = ' 
      
       
       MOV AH,1
       INT 21H
       SUB AL,48
       MOV DIF ,AL 
       
       XOR BX,BX 
       XOR CX,CX
       MOV CX,4
       MOV BL,FT
       MOV CL,BL
       
       SUM: 
       ADD AL,DIF 
       ADD BL,AL
       LOOP SUM
       
        PRINTN
       PRINT 'SUM = '
       
       MOV CL,BL
       AND BL,0F0H
       ROR BL,4
       ADD BL,48
       MOV DL,BL
       MOV AH,2
       INT 21H
       
       MOV BL,CL
       AND BL,0FH
       ADD BL,48
       MOV DL,BL
       MOV AH,2
       INT 21H
       
       MAIN ENDP
       END MAIN