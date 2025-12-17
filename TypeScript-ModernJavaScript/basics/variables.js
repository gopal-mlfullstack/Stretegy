//  Basics
// Concept 1: Variables (let, const, var) -Modern Way
// Real-world relevance: 99% of modern JS code uses let and const. Understanding scopes prevents bugs.
// /*
// Explanation:
// >>> const: Use for values that won't be reassigned (most common)
// >>> let: Used when we need to reasign
// >>> var: Avoid (old, function-scoped, causes bugs)

// const - cannot reassign
const API_URL = "https://api.example.com";
const user = { name: "Gopal", age: 19 };
user.age = 20; // modifying object properties
// user = {};  // it will returns: TypeError: Assignment to constant variable.

// let - can reassign
let counter = 0;
counter += 1;
console.log(counter);

// Block scope
if (true) {
  const message = "Hello";
  console.log(message); // works
}
// console.log(message);// it will returns: ReferenceError: message is not defined

// Real-World use:

// API configuration
const API_KEY = "my-key-here";
const BASE_URL = "https://api.github.com";

// Dynamic Data
let isLoading = true;
let currentPage = 7;

console.log(isLoading, currentPage);
