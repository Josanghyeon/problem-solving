function solution(s, n) {
  let answer = "";
  for (let i = 0; i < s.length; i++)
    if (s[i] == " ") answer += " ";
    else {
      if (s.charCodeAt(i) < 91) {
        if (s.charCodeAt(i) + n > 90)
          answer += String.fromCharCode(s.charCodeAt(i) + n - 26);
        else answer += String.fromCharCode(s.charCodeAt(i) + n);
      } else {
        if (s.charCodeAt(i) + n > 122)
          answer += String.fromCharCode(s.charCodeAt(i) + n - 26);
        else answer += String.fromCharCode(s.charCodeAt(i) + n);
      }
    }
  return answer;
}

console.log(solution("AZ", 1));
console.log(solution("z", 1));
console.log(solution("a B z", 4));
