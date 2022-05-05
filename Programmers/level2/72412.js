function solution(info, query) {
  var answer = [];
  let map = {};

  function combination(infos, score, start) {
    let key = infos.join(""); // 키 값으로 쓸거 합쳐주기
    // 값이 있으면 push
    if (map[key]) map[key].push(score);
    // 값이 없으면 프로퍼티 만들어주기
    else map[key] = [score];
    // -를 이용해 조합 만들기
    for (let i = start; i < infos.length; i++) {
      let combiArr = [...infos]; // 전개연산자 ...
      combiArr[i] = "-";
      combination(combiArr, score, i + 1);
    }
  }

  // 이분탐색
  function binarySearch(map2, key2, score2) {
    let scoreArr = map2[key2];
    if (scoreArr) {
      var start = 0;
      var end = scoreArr.length;
      while (start < end) {
        var mid = Math.floor((start + end) / 2);
        if (scoreArr[mid] >= score2) {
          // 현재 가르키는 값보다 내가 찾는 값이
          end = mid;
        } else if (scoreArr[mid] < score2) {
          start = mid + 1;
        }
      }
      return scoreArr.length - start;
    } else return 0;
  }

  // 1. -로 가능한 모든 조합 만들기
  for (let i = 0; i < info.length; i++) {
    let infos = info[i].split(" ");
    let score = infos.pop();
    combination(infos, score, 0);
  }

  // 2. 이분탐색을 위해 정렬
  for (let key in map) {
    map[key].sort((o1, o2) => o1 - o2);
  }

  // 3. 이분탐색 실행
  for (let i = 0; i < query.length; i++) {
    let querys = query[i].replace(/ and /g, "").split(" ");
    let score = Number(querys.pop());
    answer.push(binarySearch(map, querys.join(""), score));
  }

  return answer;
}

console.log(
  solution(
    [
      "java backend junior pizza 150",
      "python frontend senior chicken 210",
      "python frontend senior chicken 150",
      "cpp backend senior pizza 260",
      "java backend junior chicken 80",
      "python backend senior chicken 50",
    ],
    [
      "java and backend and junior and pizza 100",
      "python and frontend and senior and chicken 200",
      "cpp and - and senior and pizza 250",
      "- and backend and senior and - 150",
      "- and - and - and chicken 100",
      "- and - and - and - 150",
    ]
  )
);
