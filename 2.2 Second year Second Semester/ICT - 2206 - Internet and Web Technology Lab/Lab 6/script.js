var names = ["John", "David", "Shaun", "Tom"];
var namesType2 = new Array();
var namesType3 = new Array(5);
var namesType4 = new Array();
var sortedNames = new Array();
//print array
document.write(names + "<br/>");

namesType2[0] = "ASD";
namesType2[1] = "sdf";
namesType3[0] = "dfadf";
namesType3[1] = "dfbsdf";
namesType2.concat(namesType3);
document.write(namesType2 + "<br/>");

//have to put it in a new array
namesType4 = namesType2.concat(namesType3);
document.write(namesType4);

// loop in Array
document.write("<br/>" +"Loop in Array" +"<br/>");
for(var i = 0; i<3; i++)
namesType4[i] = parseInt(prompt("Enter any number"));

for(var i = 0; i<3; i++)
document.write(namesType4[i] + "<br/>");


//pop (removes from last)
names.pop();
console.log(names);

//push adds element in the last
names.push("Test")
console.log(names);

//shift is opposite of pop (removes from first)
names.shift();
console.log(names);

//unshift : adds element in the first
names.unshift("You");
console.log(names);

//splice method : with it elements can be added/removed
//splice(add elements, remove elements) 
//first parameter is for starting index
names.splice(2, 0, "zxc", "dxf");
console.log(names);
//second parameter is for deleting number of elements starting from first index
names.splice(0, 1);
console.log(names);

//slice: returns an array and never changes the main array.
namesType4 = names.slice(2,5);
console.log(names);
console.log(namesType4);
namesType4 = namesType4.sort();
console.log(namesType4);
//reverse sorting
namesType4.reverse();
console.log(namesType4);

// sorting can sort strings not numbers
var numbers = [67, 98, 23];

// number sorting user defined funtion
numbers.sort(function(a,b){
    return a-b;
});
console.log(numbers);



// 
function highestScore(scores){
    var high = scores[0];
    for(var i = 0; i < 3; i++){
        if(high < scores[i])
            high = scores[i];
    }
    return high;
}

var scores = [34,12,78];
console.log (highestScore(scores));

//2d array declaration
var studentInfo = [[1, "A"], [2, "B"], [3, "C"]];

//Object

//student variables without object creation
var name = "Mehrin Anannya";
var roll = 12345;
var year = "1st";
var courses = ["Operating System", "Data Structure", "Algorithm"];

//student variables with object creation
var student1 = {
    name : "Mehrin Anannya",
    roll : 12345,
    year : "1st",
    courses : ["Operating System", "Data Structure", "Algorithm"]
}

var student1 = {
    name : "Karim",
    roll : 12345,
    year : "1st",
    courses : ["Operating System", "Data Structure", "Algorithm"]
}

var student2 = {
    name : "Rahim",
    roll : 6789,
    year : "2nd",
    courses : ["Operating System", "Data Structure", "Algorithm"]
}

var student3 = {
    name : "Rahim",
    roll : 4566,
    year : "3rd",
    courses : ["Operating System", "Data Structure", "Algorithm"]
}

console.log(student1.courses);
console.log(student2.name);
console.log(student3.roll);


//constructor

function Student(name, age, roll, year, courses){
    this.name = name;
    this.age = age;
    this.roll = roll;
    this.courses = courses;


    this.display = function(){
        console.log(this.name);
        console.log(this.roll);
        console.log(this.year);
        console.log(this.courses);
    }
}

var student5  = new Student("AS", 123, "1st", ["Operating System", "Data Structure", "Algorithm"]);
console.log(student5.name);
console.log(student5.roll);


//adding function in the object
student5.display();