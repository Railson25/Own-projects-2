/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  if (n <= 2) return n;
  let firstStep = 1;
  let secondStep = 2;
  for (let i = 3; i <= n; i++) {
    let current = firstStep + secondStep;
    firstStep = secondStep;
    secondStep = current;
  }
  return secondStep;
};
