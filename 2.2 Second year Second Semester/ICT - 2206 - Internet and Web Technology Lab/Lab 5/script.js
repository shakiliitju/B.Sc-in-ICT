
// a=2;
// b=3;




//Task-1

// var x = prompt ("Enter your number :  ");

// document.write("Result is : ")
// if(x>=80)
// {
//     document.write("A+");
// }
// else if(x>=70 && x<=79)
// {
//     document.write("A");
// }
// else if(x>=60 && x<=69)
// {
//     document.write("A-");
// }
// else if(x>=50 && x<=59)
// {
//     document.write("B");
// }
// else if(x>=40 && x<=49)
// {
//     document.write("C");
// }
// else if(x>=33 && x<=39)
// {
//     document.write("D");
// }
// else if(x>=0 && x<=32)
// {
//     document.write("Fail");
// }
// else
// {
//     document.write("Wrong input");
// }



// switch (new Date().getDay()) {
//     case 0:
//       day = "Sunday";
//       break;
//     case 1:
//       day = "Monday";
//       break;
//     case 2:
//        day = "Tuesday";
//       break;
//     case 3:
//       day = "Wednesday";
//       break;
//     case 4:
//       day = "Thursday";
//       break;
//     case 5:
//       day = "Friday";
//       break;
//     case 6:
//       day = "Saturday";
//   }

//   document.write(day);



// ternary operator

// var digit = prompt ("Enter your number :  ");
// var p = digit > 0 ? "<br>Positive <br>" : "<br>Negetive";
// document.write(p);



// Task - 2

// var n1 = prompt("Enter first Number : ");
// var n2 = prompt("Enter second Number : ");


// for loop
// for(let i=1; i<=10; i++)
// {
//     for(let j=n1; j<=n2; j++)
//     {
//         document.write(i+ " x " +j+ " = " + i*j+", ");
//     }
//     document.write("</br>");
// }



//while loop
// let a=1;
// while(a<=10)
// {
//     let b = n1;
//     while(a<=n2)
//     {
//         document.write(a+ " x " +b+ " = " + a*b+", ");
//         b++;
//     }
//     a++;
// }



// function

// function area(a,pi){
//     return a*pi;
// }

// document.write(" Area is : " +area(8,3.1416));
// area();


// Task - 3


var n1 = prompt("Enter first Number : ");
n1 = parseInt(n1);

var n2 = prompt("Enter second Number : ");
n2 = parseInt(n2);

var n3 = prompt("Enter third Number : ");
n3 = parseInt(n3);


function add(n1,n2,n3)
{
    return (n1+n2+n3);
}

function sub(n1,n2,n3)
{
    return (n1-n2-n3);
}

function mul(n1,n2,n3)
{
    return (n1*n2*n3);
}

function div(n1,n2,n3)
{
    return ((n1/n2)/n3);
}



document.write(n1 +" + " + n2 + " + " + n3 + " = " + add(n1,n2,n3)+ "<br>");
document.write(n1 +" - " + n2 + " - " + n3 + " = " + sub(n1,n2,n3)+ "<br>");
document.write(n1 +" * " + n2 + " * " + n3 + " = " + mul(n1,n2,n3)+ "<br>");
document.write(n1 +" / " + n2 + " / " + n3 + " = " + div(n1,n2,n3)+ "<br>");
