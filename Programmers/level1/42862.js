function solution(n, lost, reserve) {
  reserve.sort();
  lost.sort();
  reserve = reserve.filter((item) => {
    for (let i = 0; i < lost.length; i++) {
      if (lost[i] == item) {
        lost = lost.filter((items) => {
          if (items == item) return false;
          return true;
        });
        return false;
      }
    }
    return true;
  });
  let cnt = reserve.length + n - (lost.length + reserve.length);
  for (let i = 0; i < lost.length; i++) {
    for (let j = 0; j < reserve.length; j++) {
      if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j]) {
        cnt++;
        reserve[j] = -1;
        break;
      }
    }
  }
  return cnt;
}

console.log(solution(5, [2, 4], [3, 1]));
console.log(solution(5, [2, 4], [1, 3, 5]));
console.log(solution(5, [2, 4], [3]));
console.log(solution(3, [3], [1]));
