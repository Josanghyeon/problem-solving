function solution(n) {
  let newStr = "";
  n = n.toString(3);
  for (let i = n.length - 1; i >= 0; i--) {
    newStr += n[i];
  }
  return parseInt(newStr, 3);
}

console.log(solution(45));
console.log(solution(125));
