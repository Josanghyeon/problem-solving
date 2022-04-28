function solution(record) {
  var answer = [];
  const users = {};
  record.map((item) => {
    const [action, id, name] = item.split(" ");
    if (action !== "Leave") users[id] = name;
  });
  record.map((item) => {
    const [action, id, name] = item.split(" ");
    if (action === "Enter") answer.push(`${users[id]}님이 들어왔습니다.`);
    else if (action === "Leave") answer.push(`${users[id]}님이 나갔습니다.`);
  });
  return answer;
}
console.log(
  solution([
    "Enter uid1234 Muzi",
    "Enter uid4567 Prodo",
    "Leave uid1234",
    "Enter uid1234 Prodo",
    "Change uid4567 Ryan",
  ])
);
