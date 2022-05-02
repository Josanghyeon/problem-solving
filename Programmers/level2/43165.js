function solution(numbers, target) {
  let answer = 0;
  function dfs(index, number, bool) {
    if (index === numbers.length) {
      if (target === number) answer++;
      return;
    }
    if (bool) {
      dfs(index + 1, number + numbers[index], true);
      dfs(index + 1, number + numbers[index], false);
    } else {
      dfs(index + 1, number - numbers[index], true);
      dfs(index + 1, number - numbers[index], false);
    }
  }
  dfs(0, 0, false);
  dfs(0, 0, true);
  return answer / 2;
}

console.log(solution([1, 1, 1, 1, 1], 3));
