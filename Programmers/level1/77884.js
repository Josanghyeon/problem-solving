function solution(left, right) {
  let result = 0;
  for (let i = left; i <= right; i++) {
    let a = 1;
    for (let j = 2; j <= i; j++) {
      if (i % j === 0) a++;
    }
    if (a % 2 == 0) result += i;
    else result -= i;
  }
  return result;
}

console.log(solution(13, 17));
// console.log(solution(24, 27));
