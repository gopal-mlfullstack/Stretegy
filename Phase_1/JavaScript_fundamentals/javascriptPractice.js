/*
Write a loop that makes seven calls to console.log to output the following
triangle:
#
##
###
####
#####
######
#######
*/

/*
for (let i = 1; i <= 7; i += 1) {
    console.log("#".repeat(i));
}

for (let i = 0; i <= 7; i +=1){
    line = ""
    for (let j = 1; j <= i; j +=1){
        line += "#"
    }
    console.log(line);
}



for (let i = 0; i <= 7; i += 1) {
    line = "";
    for (let j = 0; j <= i; j += 1) {
        line += "#";
    }
    console.log(line);
}

*/


/*

FizzBuzz
Write a program that uses console.log to print all the numbers from 1 to 100,
with two exceptions. For numbers divisible by 3, print "Fizz" instead of the
number, and for numbers divisible by 5 (and not 3), print "Buzz" instead.
When you have that working, modify your program to print "FizzBuzz" for
numbers that are divisible by both 3 and 5 (and still print "Fizz" or "Buzz"
for numbers divisible by only one of those).
    (This is actually an interview question that has been claimed to weed out
    a significant percentage of programmer candidates. So if you solved it, yourlabor market value just went up.)
*/
/*
function getFizzBuzz(){

    for (let i = 1; i <= 100; i += 1){
        if ( i % 3 === 0 && i % 5 === 0) {
            console.log("FizzBuzz");
        }
        else if (i % 3 === 0) {
            console.log("Fizz");
        }
        else if ( i % 5 === 0) {
            console.log("Buzz");
        }

        else {
        console.log(i);
        }

    }
}
getFizzBuzz();

*/


/*

Chessboard
Write a program that creates a string that represents an 8×8 grid, using newline
characters to separate lines. At each position of the grid there is either a space
or a "#" character. The characters should form a chessboard.
Passing this string to console.log should show something like this:
 # # # #
# # # #
 # # # #
# # # #
 # # # #
# # # #
 # # # #
# # # #
When you have a program that generates this pattern, define a binding size
= 8 and change the program so that it works for any size, outputting a grid
of the given width and height.


*/
/*
size = 50;
let board = "";

for (let i = 1; i <= size; i += 1) {
    for ( let j = 1; j <= size; j += 1) {
        if ((i + j) % 2 === 0){
            board += " ";
        }else {
            board += "#";
        }
    }
    board += "\n";
}

console.log(board);

*/



// Functions in JavaScript
/*
const square = function(x) {
    return x * x;
}
console.log(square(7));

const makeNoise = function() {
    return "Pling!"
}
console.log(makeNoise());

let globalVariable = 7; // Global Scope
if (true) {
    let value = 17; // Block Scope
    var value2 = 19; // Global Scope
    console.log(value);
}
console.log(globalVariable, value2)

// Some exersies
// 1. sum of of two numbers
// problem: Write a function sum(a, b) that returns the sum of two numbers

function getSum(a, b){
    return a + b;
}
console.log(getSum(7, 7));

//2 maximum number
function findMax(arr) {
    let max_ = -Infinity;
    for (let i = 0; i < arr.length; i += 1){
        if (arr[i] > max_){
            max_ = arr[i];
        }
    }
    return max_
}

console.log(findMax([1, 5, 3, 9, 2])); // Output: 9
console.log(findMax([-5, -2, -8, -1])); // Output: -1

// counting vowels in a string
function countVowels(str) {
    const vowels = "aeiou";
    let count = 0;
    for (let i = 0; i < str.length; i += 1){
        if (vowels.includes(str[i].toLowerCase())) {
            count += 1;
        }
    }
    return count;
}

console.log(countVowels("hello")); // Output: 2
console.log(countVowels("Javascript")); // Output: 3
*/

// Arrow Functions
const square = x => x*x;
console.log(square(7));


















