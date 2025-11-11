import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";

const Card = ({ title, rating }) => {
  return (
    <div>
      <h2>
        {title} ({rating})
      </h2>
    </div>
  );
};

const App = () => {
  return (
    <div>
      <h2> Functional Arrow Components!</h2>
      <Card title="Star Wars" rating={8.5} />
      <Card title="Inception" rating={8.8} />
      <Card title="Interstellar" rating={8.7} />
      <Card title="The Matrix" rating={8.1} />
      <Card title="Man of Steel" rating={7.1} />
      <Card title="Peaky Blinders" rating={8.7} />
      <Card title="Game of Thrones" rating={9.2} />
      <Card title="The Dark Knight" rating={9.0} />
    </div>
  );
};

export default App;
