function solution(n, arr1, arr2) {
  let Map = [];
  for (let i = 0; i < n; i++) {
    let NEW = "";
    let b = String(arr2[i].toString(2).padStart(n, "0"));
    let a = String(arr1[i].toString(2).padStart(n, "0"));
    for (let j = 0; j < n; j++) {
      if (a[j] == 1 || b[j] == 1) NEW += "#";
      else NEW += " ";
    }
    Map.push(NEW);
  }
  return Map;
}

console.log(solution(5, [9, 20, 28, 18, 11], [30, 1, 21, 17, 28]));
// console.log(solution(6, [46, 33, 33, 22, 31, 50], [27, 56, 19, 14, 14, 10]));
