function solution(id_list, report, k) {
  let ban = {};
  let answer = [];

  for (let i = 0; i < id_list.length; i++) {
    answer.push(0);
    ban[id_list[i]] = { ReportCnt: 0, list: [] };
  }

  for (let i = 0; i < report.length; i++) {
    const [reporter, prison] = report[i].split(" ");
    if (ban[prison].list.indexOf(reporter) === -1) {
      ban[prison].list.push(reporter);
      ban[prison].ReportCnt++;
    }
  }

  for (let i = 0; i < id_list.length; i++) {
    if (ban[id_list[i]].ReportCnt >= k) {
      for (let j = 0; j < ban[id_list[i]].list.length; j++) {
        answer[id_list.indexOf(ban[id_list[i]].list[j])]++;
      }
    }
  }

  return answer;
}

console.log(
  solution(
    ["muzi", "frodo", "apeach", "neo"],
    ["muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"],
    2
  )
);

// console.log(
//   solution(["con", "ryan"], ["ryan con", "ryan con", "ryan con", "ryan con"], 3)
// );
