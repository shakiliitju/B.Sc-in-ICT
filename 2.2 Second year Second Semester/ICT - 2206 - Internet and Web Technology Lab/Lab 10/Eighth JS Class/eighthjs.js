// var paraVar = document.querySelector("#paraId");
// function addStyle(){
//    paraVar.style.color = "red";
//    paraVar.style.fontSize = "3re";
//    paraVar.style.fontWeight =  "bold";
//    paraVar.style.fontStyle = "italic";
// }

// function removeStyle(){
//     paraVar.style = " ";
// }

//better approach
var paraVar = document.querySelector("#paraId");
function addStyle(){
   paraVar.classList.add("para-style");
    //console.log(paraVar.classList);
 }
 
 function removeStyle(){
    paraVar.classList.remove("para-style");
 }
 
function nextPage(){
   location.href="next.html";
}