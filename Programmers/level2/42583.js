function solution(bridge_length, weight, truck_weights) {
  const bridge = new Array(bridge_length).fill(0);
  let sum = 0;
  let tick = 0;

  while (truck_weights.length > 0 || sum != 0) {
    sum -= bridge.shift();
    if (weight >= sum + truck_weights[0]) {
      bridge.push(truck_weights[0]);
      sum += truck_weights[0];
      truck_weights.shift();
    } else {
      bridge.push(0);
    }
    tick++;
  }
  return tick;
}

// console.log(solution(2, 10, [7, 4, 5, 6]));
console.log(solution(100, 100, [10]));
// console.log(solution(100, 100, [10, 10, 10, 10, 10, 10, 10, 10, 10, 10]));
// console.log(solution(1, 2, [1, 1, 1]));
// console.log(solution(2, 10, [7, 4, 5, 6]));