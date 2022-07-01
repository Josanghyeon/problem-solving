"use strict";

const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n").join("");
let answer = 0;

let dp = [1];
for (let i = 2; i * i <= input; i++) {
  dp.push(i * i);
}

console.log(dp);
