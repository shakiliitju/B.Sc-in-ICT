// getelement by id

document.getElementById("header1");
document.getElementById("header1").innerHTML="Hi Shakil hossain. This is changing header 1";

var header = document.getElementById("header1");
header.innerHTML=" hellow";


// getelements by tag name

document.getElementsByTagName("h2");
document.getElementsByTagName("h2").innerHTML="Hi Shakil hossain. This is changing header 2";
document.getElementsByTagName("h2")[0].innerHTML="Hi Shakil hossain. This is changing header 2";
document.getElementsByTagName("h2")[1].innerHTML="Hi Shakil hossain. This is changing header 2";


// getelement by class name

document.getElementsByClassName("header3");
document.getElementsByClassName("header3")[0].innerHTML="This is changing header 3";


// Query selector in replace of id or class

document.querySelector("#header1").innerHTML="Hi";
document.querySelector(".header3").innerHTML="Hello";


// Query selector Parrent child relation of a tag

document.querySelector("a").innerHTML="Hi";
document.querySelector("li a").innerHTML="Hello";
document.querySelector("my-div a").innerHTML="Who are you";



