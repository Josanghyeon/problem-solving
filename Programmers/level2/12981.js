function solution(n, words) {
  let use = {};
  let before = "";
  for (let i = 0; i < words.length; i++) {
    if (words[i].length < 2) {
      return [(i % n) + 1, Math.floor(i / n) + 1];
    }
    if (i == 0) {
      use[words[i]] = true;
      before = words[i][words[i].length - 1];
      continue;
    }
    if (use[words[i]]) {
      return [(i % n) + 1, Math.floor(i / n) + 1];
    } else if (before != words[i][0]) {
      return [(i % n) + 1, Math.floor(i / n) + 1];
    }
    use[words[i]] = true;
    before = words[i][words[i].length - 1];
  }
  return [0, 0];
}

console.log(
  solution(3, [
    "tank",
    "kick",
    "know",
    "wheel",
    "land",
    "dream",
    "mother",
    "robot",
    "tank",
  ])
);
