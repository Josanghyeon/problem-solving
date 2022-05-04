function solution(s) {
  const Stack = [];
  for (let i = 0; i < s.length; i++) {
    if (Stack[Stack.length - 1] == s[i]) Stack.pop();
    else Stack.push(s[i]);
  }
  return Stack.length < 1 ? 1 : 0;
}

console.log(solution("baabaa"));
console.log(solution("cdcd"));
