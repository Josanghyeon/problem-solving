function solution(priorities, location) {
  let answer = 0;
  const newArr = priorities.map((item, index) => [index, item]);
  while (1) {
    let shifted = newArr.shift();
    let P = true;
    for (let i = 0; i < newArr.length; i++) {
      if (shifted[1] < newArr[i][1]) {
        P = false;
        break;
      }
    }
    if (P) {
      answer++;
      if (shifted[0] === location) break;
    } else {
      newArr.push(shifted);
    }
  }
  return answer;
}

console.log(solution([1, 2, 3, 1, 2], 0)); //5
console.log(solution([2, 1, 3, 2], 2)); //1
console.log(solution([1, 1, 9, 1, 1, 1], 0)); //5
console.log(solution([1, 1, 1], 1)); //2
console.log(solution([1, 1, 2, 3, 1], 2)); //3
