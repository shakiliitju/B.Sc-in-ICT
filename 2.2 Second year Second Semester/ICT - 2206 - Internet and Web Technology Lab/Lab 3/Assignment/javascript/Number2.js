var array = [7, 2, 9, 1, 6, 1, 8, 3, 3, 8];
function shuffle(list) {
    var temp;
    var rdm = Math.floor(Math.random() * 10);

    for (let i = 0; i < list.length; i++) {
        temp = list[i];
        list[i] = list[rdm];
        list[rdm] = temp;
    }

    document.write(list);
    document.write("<br>");
}
document.write("Shuffle 1 : ");
shuffle(array);
document.write("Shuffle 2 : ");
shuffle(array);
document.write("Shuffle 3 : ");
shuffle(array);