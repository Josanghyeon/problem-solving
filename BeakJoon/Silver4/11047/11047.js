"use strict";

const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

let [N, K] = input.shift().split(" ");
const coin = input.reverse().map((v) => v.replace(/\r/g, ""));

let BK = K,
  cnt,
  i;
while (K != 0) {
  cnt = 0;
  K = BK;
  for (i = 0; i < coin.length; i++) {
    cnt += Math.floor(K / coin[i]);
    K %= coin[i];
    if (K < 1) break;
  }
  coin.shift();
}

console.log(cnt);
