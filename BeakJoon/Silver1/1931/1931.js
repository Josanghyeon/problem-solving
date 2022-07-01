"use strict";

const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const N = input.shift();
const meet = input.map((v) => v.replace(/\r/g, "").split(" "));

// meet.sort((a, b) => {
//   if (a[0] > b[0]) return 1;
//   if (b[0] > a[0]) return -1;
//   return 0;
// });

console.log(meet);
