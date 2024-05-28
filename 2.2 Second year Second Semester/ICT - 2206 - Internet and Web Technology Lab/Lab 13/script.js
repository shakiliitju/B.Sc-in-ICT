// try catch block

// try{
//     alert("Hello from try block.");
//     alert(y);
// } catch(error){
//     console.log(error);
//     console.log(error.name);
//     console.log(error.message);

// }finally{
//     alert("Executing Finally block.")
// }



//Throw statement
function myFunction(){
    const message = document.getElementById("paraId");
    message.innerHTML = "";
    let x = document.getElementById("demo").ariaValueMax;

    try{
        if(x=="") throw "is empty";
        if(isNaN(x)) throw "is not a number";
        x = Number(x);
        if(x>10) throw "is to high";
        if(x<5) throw "is to low";
    }
    catch(err){
        message.innerHTML = "Input " + err;
    }
    finally{
        document.getElementById("demo").value = "";
    }
}