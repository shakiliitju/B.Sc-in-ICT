
//start first question
var arr = [7, 2, 9, 1, 6, 1, 8, 3, 3, 8];
var arr2 = [7, 2, 9, 1, 6, 1, 8, 3, 3, 8];
var ind = [0, 0, 0, 0, 0, 0, 0, 0, 0];

for (let k = 0; k < arr.length; k++) {
  ind[arr[k] - 1]++;
}

var max = 0;
for (let i = 0; i < ind.length; i++) {
  if (ind[i] > max) {
    max = ind[i];
  }
}
document.write("Most frequent elements are : ");
for (let i = 0; i < ind.length; i++) {
  if (ind[i] == max) {
    document.write(i + 1 + " ");
  }
}
document.write("<br>Frequency is : " + max + "<br>");
// end of first question

// start secoend question
document.write("<br>Shuffling List <br>");

function shuffle(list) {
  var tmp;
  var rdm = Math.floor(Math.random() * 10);

  for (let i = 0; i < list.length; i++) {
    tmp = list[i];
    list[i] = list[rdm];
    list[rdm] = tmp;
  }

  document.write(list);
  document.write("<br>");
}
document.write("Shuffle 1 : ");
shuffle(arr);
document.write("Shuffle 2 : ");
shuffle(arr);
document.write("Shuffle 3 : ");
shuffle(arr);
// end of second question

// start third question 
function swap(list, p1, p2) {
  var tmp1;

  tmp1 = list[p1];
  list[p1] = list[p2];
  list[p2] = tmp1;

  document.write("<br>After Swaping index " + p1 + " and " + p2 + " : ");
  document.write(list);
}

var p1 = 5;
var p2 = 1;
swap(arr2, p1, p2);
// end third question