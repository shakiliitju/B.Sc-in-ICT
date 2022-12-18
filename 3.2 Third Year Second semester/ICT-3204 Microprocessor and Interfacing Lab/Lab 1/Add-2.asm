include 'emu8086.inc'
.stack 100h
.model small
.data
.code
 main proc

 print 'Enter First Number = '

 mov ah,01h
 int 21h
 sub al,48
 mov bl,al

 mov dl,10
 mov ah,02h
 int 21h

 mov dl,13
 mov ah,02h
 int 21h

 print 'Enter Second Number = '

 mov ah,01h
 int 21h
 sub al,48

 add bl,al
 add bl,48


 mov dl,10
 mov ah,02h
 int 21h
END

 mov dl,13
 mov ah,02h
 int 21h

 print 'Sum = '
 mov dl,bl

 mov ah,02h
 int 21h

 main endp
end main