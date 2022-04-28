function solution(s) {
  let min = s.length;
  for (let i = 1; i < s.length; i++) {
    let cpy = s.length;
    let bundleArr = [];
    let ComboNum = 0;
    for (let j = 0; j < s.length; j += i) {
      bundleArr.push(s.slice(j, j + i));
      if (bundleArr[bundleArr.length - 1] == bundleArr[bundleArr.length - 2]) {
        cpy -= i;
        if (ComboNum == 0) {
          cpy++;
        }
        ComboNum++;
      } else {
        if (ComboNum > 8) cpy++;
        if (ComboNum > 98) cpy++;
        if (ComboNum > 998) cpy++;
        ComboNum = 0;
      }
    }
    if (ComboNum > 8) cpy++;
    if (ComboNum > 98) cpy++;
    if (ComboNum > 998) cpy++;
    if (cpy < min) min = cpy;
  }
  return min;
}

console.log(solution("aabbaccc")); //7 2a2ba3c 1개씩 묶음
console.log(solution("ababcdcdababcdcd")); //9 1ababcdcd 8개씩 묶음
console.log(solution("abcabcdede")); //8 2abcdede 3개씩 묶음
console.log(solution("abcabcabcabcdededededede")); //14 2abcabc2dedede 6개로 묶음
console.log(solution("xababcdcdababcdcd")); //17 안 묶임
console.log(solution("aaaaaaaaaaaabcd")); //12abcd 6
console.log(solution("xxxxxxxxxxyyy")); // 5 10x3y
console.log(
  solution(
    "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
  )
);
