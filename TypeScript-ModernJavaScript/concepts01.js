// JavaScript is Single Threaded
/*
Single-Threaded means JavaScript can only do ONE thing at a time, Think of it likehaving only one worker in a factory, they can't assemble two products simulteneously

*/
console.log("First Statement!");
console.log("Second Statement!");
console.log("Third Statement!");

// Synchronous Code Blocks Execution
// "Blcoks execution" means the next line waits untill the current line finishes completely.
// function slowTask() {
//   // lets imagine this takes 3 seconds
//   let sum = 0;
//   for (let i = 0; i < 300000000; i++) {
//     sum += i;
//   }
//   return sum;
// }
// console.log("start");
// let result = slowTask();
// console.log("End");
// The problem: If something takes a long time (like fetching data from a server), your entire program freezes. The user can't click buttons, animations stop-everything waits.

///// -- Passing Functions as Arguments (callbacks)
// In JavaScript fucntion are values - I can pass them around like numbers or strings.

// example of regular function call
function greet(name) {
  console.log("Hello " + name);
}
greet("Gopal"); // this function will return Hello Gopal
