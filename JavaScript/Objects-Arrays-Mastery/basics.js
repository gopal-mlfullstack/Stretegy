//// Object Creation Methods /////

// const person = {
//   name: "Gopal",
//   age: 19,
//   isStudent: true,
// };
//
// console.log(person);
// // if i want to access any value of that key if that key and value pair both are present then We can print like this(using dot notaion)
//
// console.log("Name: ", person.name);
// console.log("Age: ", person.age);
// console.log("Is Student: ", person.isStudent);
//
// // to add a new key-value into this person We can do like this(using dot notaion)
//
// person.language = "Python";
//
// console.log(person);

////------- Using new Objects()
// const obj = new Object();
// obj.name = "Gopal";
// obj.lang = "Python";
// console.log(obj);

////------ 3. Object.create() (Prototype-based creation)
// Creates a new object with a specified Prototype.
// const proto = {
//   greet() {
//     console.log("Hello Arch!");
//   },
// };
//
// const obj = Object.create(proto);
// obj.greet();

////---- 4. Constructor Functions (Before ES6 classes, old style OOP)
// Used for creating mutiple similar objects.
// function Person(name, age, lang) {
//   this.name = name;
//   this.age = age;
//   this.lang = lang;
// }
//
// const p1 = new Person("Gopal", 19, "Python");
// const p2 = new Person("Manaranjan", 19, "Python");
// const p3 = new Person("Ujjwal", 19, "JavaScript");
//
// console.log(p1.name, p1.age, p1.lang);
// console.log(p2.name, p2.age, p2.lang);
// console.log(p3.name, p3.age, p3.lang);

////-----  ES6  class (Modern and Recommended)
/*
class User {
  constructor(name, age, lang) {
    this.name = name;
    this.age = age;
    this.lang = lang;
  }

  sayHi() {
    console.log(
      `Hello, My name is ${this.name} and I am ${this.age} years old! `,
    );
  }
}

const u1 = new User("Gopal", 19, "Python");
const u2 = new User("Manaranjan", 19, "Python");
const u3 = new User("Ujjwal", 19, "JavaScipt");
u1.sayHi();
u2.sayHi();
u3.sayHi();*/

////----  Factory Function (very Usefull in Modern JS)

function createUser(name, age) {
  return {
    name,
    age,
    sayHi() {
      console.log(`My name is ${this.name} and I am ${this.age} years old!`);
    },
  };
}

const u1 = new createUser("Gopal", 19);
const u2 = new createUser("Arindam", 18);
const u3 = new createUser("Yubraj", 21);
u1.sayHi();
u2.sayHi();
u3.sayHi();
