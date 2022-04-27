function solution(n) {
  var answer = 1;
  for (let i = 1; i < n; i++) {
    let sum = 0;
    for (let j = i; sum <= n; j++) {
      if (n == sum) answer++;
      sum += j;
    }
  }
  return answer;
}

console.log(solution(15));
