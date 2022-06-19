const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const T = input.shift();

const dp = [
  [1, 0],
  [0, 1],
];

for (let i = 0; i < T; i++) {
  const fibo = Number(input.shift());
  for (let i = dp.length; i <= fibo + 1; i++) {
    dp.push([dp[i - 2][0] + dp[i - 1][0], dp[i - 2][1] + dp[i - 1][1]]);
  }
  console.log(dp[fibo][0], dp[fibo][1]);
}
