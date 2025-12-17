// 1. Declare a constant for a maximum login attempts (value: 3) and a variable to track current attempts

const maxAttempts = 7;
let curAttempts = 3;

// 2. Create a user object with const, then update the user's email property
const user = { name: "Gopal", email: "gopalmahatoinfo@gmail.com" };
user.email = "gopalmahatomain2026@gmail.com";
console.log(user);

// 3. Write code that demonstrate why var causes problems with loop counters (hint: setTimeOut)

function myApp() {
  var appName = "YESNO";
}

appName = "NONE"; // problem with using var is i can access and change this outside the function

console.log(appName);

// 4. Declare a variable for a shoping cart total that starts at 0 and increses
let curCart = 0;
curCart += 1;
console.log(curCart);

// 5. Create a constant for API endpoints (users, posts, comments)

const API_ENDPOINTS = {
  USERS: "/users",
  POSTS: "/posts",
  COMMENTS: "/comments",
};

// 6. Fix this code: const price = 100; price = 150; - What's worng and how to fix?
// here problem is variable price is declared using const, that's why We can't reassign, we have to use in this case let to reassign
let price = 100;
price = 150;
console.log(price);

// 7. Declare appropriate variables for: username (won't change),
// score (will change), game settings (won't reassign
// but properties change)
const username = "gopal2026";
let score = 7;
const gameSettings = {
  networkFine: true,
  assemblePlayers: true,
  highestScore: 777,
};

// 8. Create a block scope example showing let vs const accessibility

let money = 2000;
if (true) {
  let total_balance = 9898;
  const name = "Gopal"; // using const we can access outside the block
}
console.log(money, total_balance);
