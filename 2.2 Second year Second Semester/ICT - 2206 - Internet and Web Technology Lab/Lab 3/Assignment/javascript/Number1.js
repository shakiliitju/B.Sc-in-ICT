var array = [7, 2, 9, 1, 6, 1, 8, 3, 3, 8];
var index = [0, 0, 0, 0, 0, 0, 0, 0, 0];

for (let k = 0; k < array.length; k++) {
    index[array[k] - 1]++;
}

var max = 0;
for (let i = 0; i < index.length; i++) {
    if (index[i] > max) {
        max = index[i];
    }
}
document.write("Most frequent array elements are : ");
for (let i = 0; i < index.length; i++) {
    if (index[i] == max) {
        document.write(i + 1 + " ");
    }
}
document.write("<br>Frequency is : " + max + "<br>");