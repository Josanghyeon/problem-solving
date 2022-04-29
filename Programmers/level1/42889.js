function solution(N, stages) {
  let answer = [];
  for (let i = 1; i <= N; i++) {
    let clear = 0;
    let lose = 0;
    for (let j = 0; j < stages.length; j++) {
      if (i < stages[j]) {
        clear++;
      } else if (i == stages[j]) {
        clear++;
        lose++;
      }
    }
    answer.push([i, lose / clear]);
  }
  console.log(answer);

  answer.sort((a, b) => {
    if (a[1] > b[1]) return -1;
    else if (a[1] < b[1]) return 1;
    else {
      if (a[0] > b[0]) return 1;
      else return -1;
    }
  });

  return answer.map((item) => item[0]);
}

console.log(solution(5, [2, 1, 2, 6, 2, 4, 3, 3]));
// console.log(solution(4, [4, 4, 4, 4, 4]));
