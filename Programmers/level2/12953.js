function solution(arr) {
  let min;
  let a = arr[0];
  let b = arr[1];
  for (let i = 0; i < arr.length - 1; i++) {
    while (a % b !== 0) {
      const mod = a % b;
      a = b;
      b = mod;
    }
    min = (arr[i] * arr[i + 1]) / b;
    arr[i + 1] = min;
    a = min;
    b = arr[i + 2];
  }
  return min;
}
