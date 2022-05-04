function solution(n, t, m, p) {
  let queue = [],
    result = [],
    currentNumDecimal = -1,
    turn = 0;
  while (result.length < t) {
    if (queue.length === 0) {
      currentNumDecimal++;
      currentNumDecimal
        .toString(n)
        .split("")
        .forEach((x) => queue.push(x));
    }
    const currentChar = queue.shift();
    if (turn % m === p - 1) result.push(currentChar);
    turn++;
  }
  return result.join("").toUpperCase();
}

console.log(solution(2, 4, 2, 1));
// console.log(solution(16, 16, 2, 1));
// console.log(solution(16, 16, 2, 2));