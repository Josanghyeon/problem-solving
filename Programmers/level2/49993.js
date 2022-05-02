function solution(skill, skill_trees) {
  var answer = 0;
  for (let i = 0; i < skill_trees.length; i++) {
    let Stack = [];
    for (let j = 0; j < skill_trees[i].length; j++) {
      if (skill.includes(skill_trees[i][j])) {
        Stack.push(skill_trees[i][j]);
      }
    }
    for (let j = 0; j < Stack.length; j++) {
      if (Stack[j] !== skill[j]) {
        answer--;
        break;
      }
    }
    answer++;
  }
  return answer;
}

console.log(solution("CBD", ["BACDE", "CBADF", "AECB", "BDA"]));
