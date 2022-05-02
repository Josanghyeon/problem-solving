// function solution(maps) {
//   const dy = [1, 0, -1, 0];
//   const dx = [0, 1, 0, -1];
//   const row = maps.length;
//   const col = maps[0].length;

//   const visitCount = maps.map((r) => r.map((c) => 1));
//   const queue = [[0, 0]];

//   while (queue.length) {
//     const [y, x] = queue.shift();
//     for (let i = 0; i < 4; i++) {
//       const ny = y + dy[i];
//       const nx = x + dx[i];
//       if (
//         ny >= 0 &&
//         nx >= 0 &&
//         ny < row &&
//         nx < col &&
//         maps[ny][nx] === 1 &&
//         visitCount[ny][nx] === 1
//       ) {
//         visitCount[ny][nx] = visitCount[y][x] + 1;
//         queue.push([ny, nx]);
//       }
//     }
//   }
//   console.log(visitCount);
//   return visitCount[row - 1][col - 1] === 1 ? -1 : visitCount[row - 1][col - 1];
// }

function solution(maps) {
  const GoY = [0, 1, -1, 0]; //우 하 상 좌
  const GoX = [1, 0, 0, -1];
  const visited = maps.map((s) => s.map((c) => 1));
  const row = maps.length;
  const col = maps[0].length;
  const queue = [[0, 0]];
  while (queue.length) {
    const [y, x] = queue.shift();
    for (let i = 0; i < 4; i++) {
      const nx = x + GoX[i];
      const ny = y + GoY[i];
      if (
        nx < row &&
        ny < col &&
        nx >= 0 &&
        ny >= 0 &&
        visited[ny][nx] === 1 &&
        maps[ny][nx] === 1
      ) {
        visited[ny][nx] = visited[y][x] + 1;
        queue.push([ny, nx]);
      }
    }
  }
  console.log(visited);
  return visited[row - 1][col - 1] === 1 ? -1 : visited[row - 1][col - 1];
}

console.log(
  solution([
    [1, 0, 1, 1, 1],
    [1, 0, 1, 0, 1],
    [1, 0, 1, 1, 1],
    [1, 1, 1, 0, 1],
    [0, 0, 0, 0, 1],
  ])
);
