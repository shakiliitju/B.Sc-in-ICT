
// function messagebutton1()
// {
//     alert("Clicked Button 1");
// }

// function messagebutton2()
// {
//     alert("Clicked Button 2");
// }

// function clickParagraph()
// {
//     alert("clicked the Paragraph()");
// }



//Using query selector for onclick

function messagebutton1()
{
    var paraVar = document.querySelector("#paraId");
    paraVar.innerHTML = "You hsve the clicked the Button 1";
}


function messagebutton2()
{
    var paraVar = document.querySelector("#paraId");
    paraVar.innerHTML = "You hsve the clicked the Button 2";
}


// image click functions

var paraVar = document.querySelector("#imgid");
function image1()
{
    paraVar.src = "images/photo-1536782376847-5c9d14d97cc0.jpg";
}

function image2()
{
    paraVar.src = "images/photo-1490730141103-6cac27aaab94.jpg";
}

function image3()
{
    paraVar.src = "images/photo-1538991383142-36c4edeaffde.jpg";
}




var paraVar = document.querySelector("#id");
function next()
{
    paraVar.href="next.html";
}