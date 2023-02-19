INCLUDE "EMU8086.INC"
.MODEL SAMALL
.STACK 100H

.DATA

.CODE
MAIN PROC
    
         PRINT "ENTER FIRST NUMBER : "
         MOV AH, 1
         INT 21H
         
         PRINTN
         PRINT "ENTER SECOND NUMBER : "
         MOV BL, AL
         SUB BL, 48
         INT 21H
         
         SUB AL, 48
         SUB BL, AL
         
         MOV DL, BL
         ADD DL, 48
         
         PRINTN
         PRINT "RESULT : "
         MOV AH, 2
         INT 21H
    
MAIN ENDP
END MAIN





