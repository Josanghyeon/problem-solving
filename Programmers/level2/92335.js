function solution(n, k) {
  let result = 0;
  if (k == 10) n = String(parseInt(n, 10)).split("0");
  else n = n.toString(k).split("0");
  for (let i = 0; i < n.length; i++) {
    if (n[i] != 1 && n[i] != "") {
      for (let j = 2; j <= Math.sqrt(n[i]); j++) {
        if (n[i] % j == 0) {
          result--;
          break;
        }
      }
      result++;
    }
  }
  return result;
}

// console.log(solution(437674, 3));
console.log(solution(110011, 10));
