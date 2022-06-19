const Now = new Date();
const Year = Now.getFullYear();
const Month = Now.getMonth() + 1;
const Day = Now.getDate();

console.log(`${Year}-${Month.toString().padStart(2, "0")}-${Day}`);
