function solution(s) {
  let result = 0;
  if (s.length == 1) return result;
  for (let i = 0; i < s.length; i++) {
    s = s.substring(1) + s[0];
    console.log(s);
    const Stack = [];
    let right = true;
    for (let j = 0; j < s.length; j++) {
      if (s[j] === ")") {
        if (Stack[Stack.length - 1] == "(") {
          Stack.pop();
        } else {
          right = false;
          break;
        }
      } else if (s[j] === "]") {
        if (Stack[Stack.length - 1] == "[") {
          Stack.pop();
        } else {
          right = false;
          break;
        }
      } else if (s[j] === "}") {
        if (Stack[Stack.length - 1] == "{") {
          Stack.pop();
        } else {
          right = false;
          break;
        }
      } else {
        Stack.push(s[j]);
      }
    }
    if (right && Stack.length == 0) result++;
  }
  return result;
}

console.log(solution("(((((("));
