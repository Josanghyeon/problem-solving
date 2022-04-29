function solution(people, limit) {
  let answer = 0;
  people.sort((a, b) => a - b);
  let l = 0;
  let r = people.length - 1;
  while (l <= r) {
    if (l === r) {
      answer++;
      break;
    } else if (people[l] + people[r] <= limit) {
      l++;
      r--;
    } else {
      r--;
    }
    answer++;
  }
  return answer;
}

console.log(solution([70, 50, 80, 50], 100));
// console.log(solution([70, 80, 50], 100)); //200
// console.log(solution([10, 10, 10, 10, 10], 100));
