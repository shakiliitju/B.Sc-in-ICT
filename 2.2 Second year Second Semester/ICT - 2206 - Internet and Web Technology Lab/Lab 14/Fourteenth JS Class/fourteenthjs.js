console.clear();
//fake api from https://jsonplaceholder.typicode.com/ and https://jsonplaceholder.typicode.com/guide/
//console.log(window);

//GET method
//Get method with specific values from 1-100
//gives 404 from 101
//fetch('https://jsonplaceholder.typicode.com/posts') will fetch all objects
// fetch('https://jsonplaceholder.typicode.com/posts/101') 
//   .then((res) => {
//     if(!res.ok){
//       const message = `Error: ${res.status}`; // ES6(ECMAScript 2015) representation which 
//       //removes the use of + for string concatenation
//       //const message = res.status;
//       throw new Error(message);
//     }
//     return res.json();
//   })
//   .then(res => console.log(res))
//   .catch((err) => console.log(err));

// //POST method is for creating a resource
// fetch('https://jsonplaceholder.typicode.com/posts', {
// method : 'POST',
// headers :{     // Run without headers to get the difference
//   'Content-type': 'application/json; charset=UTF-8', 
// },
// body : JSON.stringify({
//   title: "foo",
//   body : "bar",
//   userId: "1",
// }), 
// }) 
//   .then((res) => {
//     if(!res.ok){
//       const message = `Error: ${res.status}`; // ES6(ECMAScript 2015) representation which 
//       //removes the use of + for string concatenation
//       throw new Error(message);
//     }
//     return res.json();
//   })
//   .then(res => console.log(res))
//   .catch((err) => console.log(err));


//   //PUT method is for creating a resource
// fetch('https://jsonplaceholder.typicode.com/posts/100', {
//   method : 'PUT',
//   headers :{     // Run without headers to get the difference
//     'Content-type': 'application/json; charset=UTF-8', 
//   },
//   body : JSON.stringify({
//     title: "fo",
//     body : "barjbk",
//     userId: "1",
//   }), 
//   }) 
//     .then((res) => {
//       if(!res.ok){
//         const message = `Error: ${res.status}`; // ES6(ECMAScript 2015) representation which 
//         //removes the use of + for string concatenation
//         throw new Error(message);
//       }
//       return res.json();
//     })
//     .then(res => console.log(res))
//     .catch((err) => console.log(err));
  
//     //PATCH method is for creating a resource
// fetch('https://jsonplaceholder.typicode.com/posts/100', {
//   method : 'PATCH',
//   headers :{     // Run without headers to get the difference
//     'Content-type': 'application/json; charset=UTF-8', 
//   },
//   body : JSON.stringify({
//     title: "foo_Patch",
//   }), 
//   }) 
//     .then((res) => {
//       if(!res.ok){
//         const message = `Error: ${res.status}`; // ES6(ECMAScript 2015) representation which 
//         //removes the use of + for string concatenation
//         throw new Error(message);
//       }
//       return res.json();
//     })
//     .then(res => console.log(res))
//     .catch((err) => console.log(err));
  
  //DELETE method is for creating a resource
fetch('https://jsonplaceholder.typicode.com/posts/100', {
  method : 'DELETE',
  }) 
    .then((res) => {
      if(!res.ok){
        const message = `Error: ${res.status}`; // ES6(ECMAScript 2015) representation which 
        //removes the use of + for string concatenation
        throw new Error(message);
      }
      return res.json();
    })
    .then(res => console.log(res))
    .catch((err) => console.log(err));
  