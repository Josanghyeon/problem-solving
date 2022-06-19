const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const [N, M] = input
  .shift()
  .split(" ")
  .map((v) => +v);

input = input.map((v) => v.replace(/\r/g, ""));

function solution(N, M, input) {
  let Num = new Map();
  let Poke = new Map();
  let answer = "";
  for (let i = 0; i < N; i++) {
    Num.set(i + 1, input[i]);
    Poke.set(input[i], i + 1);
  }

  input = input.slice(N);
  for (let i = 0; i < M; i++) {
    if (Poke.get(input[i])) answer += Poke.get(input[i]);
    else answer += Num.get(+input[i]);
    answer += "\n";
  }
  return answer;
}

console.log(solution(N, M, input));
