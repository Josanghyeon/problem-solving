function solution(numbers) {
  numbers.sort(
    (a, b) =>
      parseInt(b.toString() + a.toString()) -
      parseInt(a.toString() + b.toString())
  );
  if (numbers[0] === 0) return "0";
  return numbers.join("");
}

// console.log(solution([6, 10, 2]));
// console.log(solution([3, 30, 34, 5, 9]));
console.log(solution([0, 1]));
