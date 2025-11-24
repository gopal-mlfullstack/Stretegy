document.getElementById("calculate-btn").addEventListener("click", function () {
  const height = parseFloat(document.getElementById("height").value);
  const weight = parseFloat(document.getElementById("weight").value);

  if (!height || !weight) {
    alert("Please enter a both height and weight!");
    return;
  }
  const heightInMeters = height / 100;
  const bmi = weight / (heightInMeters * heightInMeters);
  // determining the category

  let category = "";
  if (bmi < 18.5) category = "Underweight";
  else if (bmi < 25) category = "Normal weight";
  else if (bmi < 30) category = "Overweight";
  else category = "Obese";

  // showing the result
  document.getElementById("bmi-value").textContent = `Your BMI: ${bmi.toFixed(
    2
  )}`;
  document.getElementById("bmi-category").textContent = `Category: ${category}`;
});
