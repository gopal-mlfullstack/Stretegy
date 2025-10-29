function convertTemp() {
  const value = parseFloat(document.getElementById("tempInput").value);
  const from_ = document.getElementById("fromUnit").value;
  const to_ = document.getElementById("toUnit").value;
  const resultEl = document.getElementById("result");
  if (isNaN(value)) {
    resultEl.textContent = "Please enter a valid number!";
    return;
  }

  let celsius;
  switch (from_) {
    case "Celsius":
      celsius = value;
      break;
    case "Fahrenheit":
      celsius = ((value - 32) * 5) / 9;
      break;
    case "Kelvin":
      celsius = value - 273.15;
      break;
    case "Rankine":
      celsius = ((value - 491.67) * 5) / 9;
      break;
  }
  let result;
  switch (to_) {
    case "Celsius":
      result = celsius;
      break;
    case "Fahrenheit":
      result = (celsius * 9) / 5 + 32;
      break;
    case "Kelvin":
      result = celsius + 273.15;
      break;
    case "Rankine":
      result = ((celsius + 273.15) * 9) / 5;
      break;
  }
  resultEl.textContent = `${value} ${from_} = ${result.toFixed(2)} to ${to_}`;
}
