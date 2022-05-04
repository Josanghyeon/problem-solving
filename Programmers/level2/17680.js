function solution(cacheSize, cities) {
  var answer = 0;
  const cache = [];
  for (let i = 0; i < cities.length; i++) {
    const Str = cities[i].toLowerCase();
    if (cache.includes(Str)) {
      answer += 1;
      cache.splice(cache.indexOf(Str), 1);
      cache.push(Str);
    } else {
      answer += 5;
      cache.push(Str);
    }
    if (cache.length > cacheSize) cache.shift();
  }
  return answer;
}
