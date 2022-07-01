"use strict";
//정답은 맞는 것 같은데 백준 문제로 메모리 초과


const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().split("\n");

const M = input.shift();
input = input.map((v) => v.replace(/\r/g, ""));
let i, j;
let set = new Set();

for (i = 0; i < M; i++) {
  const [cmd, num] = input.shift().split(" ");
  if (cmd === "add") {
    set.add(num);
  } else if (cmd === "remove") {
    set.delete(num);
  } else if (cmd === "check") {
    console.log(set.has(num) ? 1 : 0);
  } else if (cmd === "toggle") {
    if (set.has(num)) set.delete(num);
    else set.add(num);
  } else if (cmd === "all") {
    for (j = 1; j < 21; j++) set.add(j);
  } else {
    set.clear();
  }
}
