function solution(progresses, speeds) {
  let answer = [];
  while (progresses.length > 0) {
    let done = 0;
    progresses = progresses.map((prog, i) => prog + speeds[i]);
    const len = progresses.length;
    for (let j = 0; j < len; j++) {
      if (progresses[0] > 99) {
        done++;
        progresses.shift();
        speeds.shift();
      } else {
        break;
      }
    }
    if (done > 0) answer.push(done);
  }
  return answer;
}

// console.log(solution([93, 30, 55], [1, 30, 5]));
console.log(
  solution(
    [1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7],
    [7, 6, 5, 4, 3, 2, 1, 7, 6, 5, 4, 3, 2, 1]
  )
); //[2,1,1]