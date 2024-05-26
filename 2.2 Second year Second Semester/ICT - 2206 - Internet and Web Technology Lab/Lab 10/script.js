
var paraVar = document.querySelector("#paraid");


// function addstyle(){

//     paraVar.style.color = "red";
//     paraVar.style.fontsize = "medium";
//     paraVar.style.fontweight = "bold";
//     paraVar.style.fontstyle = "italic";
// }

// function removestyle(){
//     paraVar.style = " ";
// }


//Better Approach
var paraVar = document.querySelector("#paraid");
function addstyle(){
    paraVar.classList.add("para-style");
   
     }

   function removestyle(){
     paraVar.classList.remove("para-style");
 }


//function defining
document.querySelector("button").addEventListener("click",listenerFunction);
function listenerFunction()
{
    alert("hello");
}


//mouse over
document.querySelector("button").addEventListener("mouseover",listenerFunction);
function listenerFunction()
{
    alert("hello");
}
document.querySelector("button").addEventListener("click",function(a,b)
{
    alert("hello");
});


//  document.querySelector("button").addEventListener("click", listenerFunction);
//  document.querySelector("button").addEventListener("mouseover", listenerFunction);

//  function listenerFunction(){
//      alert("hello");
//  }