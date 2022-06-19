const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const [N, M] = input
  .shift()
  .split(" ")
  .map((v) => +v);

input = input.map((v) => v.replace(/\r/g, ""));

function solution(N, M, input) {
  const name = new Set(input.slice(0, N));
  let i,
    answer = [];
  input = input.slice(N);

  for (i = 0; i < M; i++) {
    if (name.has(input[i])) answer.push(input[i]);
  }

  console.log(answer.length);
  return answer.sort().join("\n");
}

console.log(solution(N, M, input));
