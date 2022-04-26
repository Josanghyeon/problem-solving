function solution(s) {
  let opened = 0;
  for (let i = 0, length = s.length; i < length; i++) {
    s[i] === "(" ? (opened += 1) : (opened -= 1);
    if (opened < 0) return false;
  }
  return opened === 0 ? true : false;
}

console.log(solution("()()"));
console.log(solution("(())()"));
console.log(solution(")()("));
console.log(solution("(()("));
