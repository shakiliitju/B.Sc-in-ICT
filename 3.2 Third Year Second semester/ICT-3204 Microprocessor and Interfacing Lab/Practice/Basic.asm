.MODEL SMALL
.STACK 100H
 .DATA
             ;DECLARED VARIABLE
             NUM1 DB 'd' ;d=100
             NUM2 DB ? 
             NUM3 DB 48
             CHAR DB '#'
             STR DB "MY NAME IS SHAKIL"
             CHAR2 DB ?
             MSG DB "HELLOW SHAKIL $"
             
             
             
             
             
 .CODE
 
       MAIN PROC
                        
          ;VARIABLE INCLUDE IN CODE     
          MOV AX, @DATA
          MOV DS, AX      
          
          ;PRINT  NUMBER             
          MOV AH, 2
          MOV DL, NUM1
          INT 21H
                        
           
          ;NEW LINE
          MOV DL, 0AH
          INT 21H
          MOV DL, 0DH
          INT 21H
          
           
          ;PRINT  NUMBER            
          MOV DL, NUM3
          INT 21H              
          
          
          ;PRINT MASSAGE
          ;MOV AH, 9
          ;LEA DX MSG
          ;INT 21H
          
       
          ;NEW LINE
          MOV DL, 0AH
          INT 21H
          MOV DL, 0DH
          INT 21H
             
          ;USER INPUT 
          MOV AH, 1
          INT 21H
          
          
          ;NEW LINE
          MOV DL, 0AH
          INT 21H
          MOV DL, 0DH
          INT 21H
          
          
          ;PRINT
          MOV AH, 2
          MOV DL, AL
          INT 21H
          
          
          
          
          
       MOV AH, 4CH
       INT 21H   
       MAIN ENDP
       
END MAIN       