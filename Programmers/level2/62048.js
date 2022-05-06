function solution(w, h) {
  var answer = 1;
  const gcd = greatestCommonDivisor(w, h);
  answer = w * h - (w + h - gcd);
  return answer;
}

let greatestCommonDivisor = (a, b) => {
  while (b > 0) {
    let r = a % b;
    a = b;
    b = r;
  }
  return a;
};
