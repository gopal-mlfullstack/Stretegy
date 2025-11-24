// handling player and computer choices
// 1. selecting HTML elements
const result = document.getElementById("result");
const score = document.getElementById("score");
const buttons = document.querySelectorAll("button");
const reset = document.getElementById("reset");

let playerScore = 0;
let computerScore = 0;

// Adding event listeners to buttons
buttons.forEach((button) => {
  button.addEventListener("click", () => {
    const playerChoice = button.id;
    const computerChoice = getComputerChoice();
    const winner = getWinner(playerChoice, computerChoice);
    showResult(playerChoice, computerChoice, winner);
  });
});

// reset
reset.addEventListener("click", () => {
  playerScore = 0;
  computerScore = 0;
  result.textContent = "Game reset! Let's play again";
  score.textContent = `Score: You ${playerScore} - ${computerScore} Computer`;
});

// function to get random computer choices
function getComputerChoice() {
  const choices = ["rock", "paper", "scissors"];
  const randomIndex = Math.floor(Math.random() * 3);
  return choices[randomIndex];
}

// Determining the winner
function getWinner(player, computer) {
  if (player === computer) return "draw";
  if (
    (player === "rock" && computer === "scissors") ||
    (player === "paper" && computer === "rock") ||
    (player === "scissors" && computer === "paper")
  ) {
    playerScore++;
    return "player";
  } else {
    computerScore++;
    return "computer";
  }
}

// Displaying the result
function showResult(player, computer, winner) {
  if (winner === "draw") {
    result.textContent = `It's a draw! You both chose: ${player}`;
  } else if (winner === "player") {
    result.textContent = `You win! ${player} beats ${computer}`;
  } else if (winner === "computer") {
    result.textContent = `Computer Wins! ${computer} beats ${player}`;
  }
  score.textContent = `Score: You ${playerScore} - ${computerScore} Computer`;
}
