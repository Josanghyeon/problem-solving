function solution(n) {
  let Cnt = 0;
  let str = n.toString(2);
  for (let i = 0; i < str.length; i++) if (str[i] === "1") Cnt++;

  while (1) {
    let NewCnt = 0;
    n++;
    let str = n.toString(2);
    for (let i = 0; i < str.length; i++) {
      if (str[i] === "1") NewCnt++;
    }
    if (Cnt == NewCnt) break;
  }
  return n;
}

console.log(solution(78));
console.log(solution(15));
