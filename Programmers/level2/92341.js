function solution(fees, records) {
  const answer = [];
  const Truck = {};
  let SortArr = [];
  
  function Plusmin(INhour, INmin, OUThour, OUTmin, id) {
    INhour = INhour == 0 ? "0" : INhour.replace(/(^0+)/, "");
    INmin = INmin == 0 ? "0" : INmin.replace(/(^0+)/, "");
    OUThour = OUThour == 0 ? "0" : OUThour.replace(/(^0+)/, "");
    OUTmin = OUTmin == 0 ? "0" : OUTmin.replace(/(^0+)/, "");
    let min = OUTmin - INmin + (OUThour - INhour) * 60;
    if (Truck[id].min) min += Truck[id].min;
    Truck[id] = { ...Truck[id], min: min, in: false };
  }

  for (let i = 0; i < records.length; i++) {
    const [time, id, exit] = records[i].split(" ");
    if (exit === "IN") {
      if (!SortArr.includes(id)) SortArr.push(id);
      Truck[id] = { ...Truck[id], time: time, in: true };
    } else {
      const [INhour, INmin] = Truck[id].time.split(":");
      const [OUThour, OUTmin] = time.split(":");
      Plusmin(INhour, INmin, OUThour, OUTmin, id);
    }
  }

  SortArr.sort((a, b) => a - b);
  for (let i = 0; i < SortArr.length; i++) {
    if (Truck[SortArr[i]].in) {
      const [INhour, INmin] = Truck[SortArr[i]].time.split(":");
      Plusmin(INhour, INmin, "23", "59", SortArr[i]);
    }
    if (fees[0] >= Truck[SortArr[i]].min) answer.push(fees[1]);
    else
      answer.push(
        fees[1] +
          Math.ceil((Truck[SortArr[i]].min - fees[0]) / fees[2]) * fees[3]
      );
  }

  return answer;
}

console.log(
  solution(
    [180, 5000, 10, 600], //기본 시간(분)	기본 요금(원)	단위 시간(분)	단위 요금(원)
    [
      "05:34 5961 IN",
      "06:00 0000 IN",
      "06:34 0000 OUT",
      "07:59 5961 OUT",
      "07:59 0148 IN",
      "18:59 0000 IN",
      "19:09 0148 OUT",
      "22:59 5961 IN",
      "23:00 5961 OUT",
    ]
  )
);
