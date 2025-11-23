/** @type {import('tailwindcss').config} */

import { plugin } from "postcss";

export default {
  content: ["./index.html", "./scr/**/*.{js, ts, jsx, tsx}"],
  theme: {
    extend: {},
  },
  plugins: [],
};
