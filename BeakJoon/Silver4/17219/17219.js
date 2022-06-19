const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const [N, M] = input
  .shift()
  .split(" ")
  .map((v) => +v);

input = input.map((v) => v.replace(/\r/g, ""));

const IdToPw = new Map();
let i;

for (i = 0; i < N; i++) {
  const [ID, PW] = input[i].split(" ");
  IdToPw.set(ID, PW);
}

input = input.slice(N);

for (i = 0; i < M; i++) console.log(IdToPw.get(input[i]));
