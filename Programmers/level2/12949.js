function solution(arr1, arr2) {
  var answer = [];
  for (let i = 0; i < arr1.length; i++) {
    let temp = [];
    for (let k = 0; k < arr2[0].length; k++) {
      let sum = 0;
      for (let j = 0; j < arr1[0].length; j++) {
        console.log(arr1[i][j], arr2[j][k]);
        sum += arr1[i][j] * arr2[j][k];
      }
      temp.push(sum);
    }
    answer.push(temp);
  }
  return answer;
}
console.log(
  solution(
    [
      [1, 4],
      [3, 2],
      [4, 1],
    ],
    [
      [3, 3],
      [3, 3],
    ]
  )
);

// console.log(
//   solution(
//     [
//       [2, 3, 2],
//       [4, 2, 4],
//       [3, 1, 4],
//     ],
//     [
//       [5, 4, 3],
//       [2, 4, 1],
//       [3, 1, 1],
//     ]
//   )
// );

// console.log(
//   solution(
//     [
//       [1, 2, 3],
//       [4, 5, 6],
//     ],
//     [
//       [1, 4],
//       [2, 5],
//       [3, 6],
//     ]
//   )
// );
