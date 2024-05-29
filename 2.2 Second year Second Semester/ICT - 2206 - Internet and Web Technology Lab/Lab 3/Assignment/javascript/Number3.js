var array = [7, 2, 9, 1, 6, 1, 8, 3, 3, 8];
function swap(list, p1, p2) {
    var tmp1;
  
    tmp1 = list[p1];
    list[p1] = list[p2];
    list[p2] = tmp1;
  
    document.write("After Swaping index " + p1 + " and " + p2 + " : ");
    document.write(list);
  }
  
  var p1 = 3;
  var p2 = 1;
  swap(array, p1, p2);