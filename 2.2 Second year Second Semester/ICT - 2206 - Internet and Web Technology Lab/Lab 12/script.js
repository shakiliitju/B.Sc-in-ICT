console.clear();
console.log(window);
//event with add(like- onclick) is used for html only
// in js it is only "click or other events", it is without on 

//change event triggers after completing the writing in the textbox.
//input textbox
// const input = document.querySelector("input");
// //const input = document.querySelector("input[name=email]");
// input.addEventListener("change", changeHandler);

// function changeHandler(e){
// document.write("changed");
// console.log("changed");
// console.log(e);
// console.log(e.type);
// console.log(e.target);
// console.log(e.target.className);
// console.log(e.target.id);
// console.log(e.target.value);
// }

//checkbox
// const programs = document.querySelectorAll("input[name=program]");
// console.log(programs);

// Array.from(programs).map((program) =>{
//     program.addEventListener("change", programHandler);
// });

// function programHandler(e){
// console.log("checked");
//     if(e.target.checked){
//         console.log(e.target.value);
//         console.log(e.target.required);
//     }
// }

//select
const selectDivision = document.querySelector("#division");
console.log(selectDivision);
selectDivision.addEventListener("change", divisionHandler);

function divisionHandler(e){
    console.log("selected");
    console.log(e.target.value);
}