airth() 
{
ech $1 $2
read c

if [ $c == 1 ]
 then
   expr $1 + $2
   
     if [ $3 == 2 ]
      then
       expr $1 - $2
   
   elif [ $3 == 3 ]
    then
      expr $1 \* $2
   
   elif [ $3 == 4 ]
    then
      expr $1 / $2
   
   fi
}


arithmatic 5 4 2

