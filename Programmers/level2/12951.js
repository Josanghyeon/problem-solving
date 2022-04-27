function solution(s) {
  let answer = "";
  let first = false;
  for (let i = 0; i < s.length; i++) {
    if (!first) {
      answer += s[i].toUpperCase();
      if (s[i] != " ") first = true;
    } else if (s[i] == " ") {
      answer += s[i];
      if (s[i + 1] !== undefined && s[i + 1] !== " ") {
        answer += s[i + 1].toUpperCase();
        i++;
      }
    } else {
      answer += s[i].toLowerCase();
    }
  }
  return answer;
}

console.log(solution(" F  c"));
