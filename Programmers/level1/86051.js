function solution(numbers) {
  let number = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
  number = number.filter((item) => {
    if (numbers.indexOf(item) === -1) return true;
    return false;
  });
  return number.reduce((accumulator, curr) => accumulator + curr);
}

console.log(solution([1, 2, 3, 4, 6, 7, 8, 0]));
console.log(solution([5, 8, 4, 0, 6, 7, 9]));