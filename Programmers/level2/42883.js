function solution(number, k) {
  let answerStack = [0];
  let deleteCount = -1;
  for (let i = 0; i < number.length && deleteCount < k + 1; i++) {
    while (deleteCount < k && number[i] > answerStack[answerStack.length - 1]) {
      answerStack.pop();
      deleteCount++;
    }
    answerStack.push(number[i]);
  }
  return answerStack.join("").substring(0, number.length - k);
}

console.log(solution("987654321", 5));
console.log(solution("4177252841", 4));
console.log(solution("1231234", 3));
console.log(solution("1924", 2));
