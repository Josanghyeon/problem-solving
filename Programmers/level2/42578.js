function solution(clothes) {
  let a = {};
  for (const c of clothes) {
    if (a[c[1]] === undefined) a[c[1]] = [];
    a[c[1]].push(c[0]);
  }

  const d = [];
  for (const c in a) {
    d.push(a[c].length + 1);
  }
  return d.reduce((acc, cur) => acc * cur, 1) - 1;
}
console.log(
  solution([
    ["yellowhat", "headgear"],
    ["bluesunglasses", "eyewear"],
    ["green_turban", "headgear"],
  ])
);

// console.log(
//   solution([
//     ["crowmask", "face"],
//     ["bluesunglasses", "face"],
//     ["smoky_makeup", "face"],
//   ])
// );
