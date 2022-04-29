function solution(sizes) {
  let max = [];
  let min = [];
  for (let i = 0; i < sizes; i++) {
    if (sizes[i][0] > sizes[i][1]) {
      max.push(sizes[i][0]);
      min.push(sizes[i][1]);
    } else {
      max.push(sizes[i][1]);
      min.push(sizes[i][0]);
    }
  }
  return Math.max(max) * Math.max(min);
}
