function solution(absolutes, signs) {
  let sum = 0;
  absolutes.map((item, index) => {
    if (!signs[index]) return (sum -= item);
    return (sum += item);
  });
  return sum;
}

console.log(solution([4, 7, 12], [true, false, true]));
console.log(solution([1, 2, 3], [false, false, true]));