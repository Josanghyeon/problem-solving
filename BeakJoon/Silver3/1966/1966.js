const path = process.platform === "linux" ? "/dev/stdin" : "input.txt";
let input = require("fs").readFileSync(path).toString().split("\n");
let arr = input.slice(0, input.length).map((el) => el.split(" ").map((el) => Number(el)));

const queue = [];

console.log(arr);