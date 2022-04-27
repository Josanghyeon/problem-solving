function solution(s) {
  let NumArr = s.split(" ").map((item) => parseInt(item));
  let min = NumArr[0];
  let max = NumArr[0];
  for (let i = 1; i < NumArr.length; i++) {
    if (NumArr[i] < min) min = NumArr[i];
    if (NumArr[i] > max) max = NumArr[i];
  }
  return min + " " + max;
}

console.log(solution("1 2 3 4"));
console.log(solution("-1 -2 -3 -4"));
console.log(solution("-1 -1"));
