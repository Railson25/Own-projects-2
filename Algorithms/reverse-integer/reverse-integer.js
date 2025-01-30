/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  const sign = x < 0 ? -1 : 1;

  x = Math.abs(x);
  let rev = 0;

  while (x !== 0) {
    let digit = x % 10;
    x = Math.floor(x / 10);
    rev = rev * 10 + digit;
  }

  rev = rev * sign;

  const INT_MAX = 2 ** 31 - 1;
  const INT_MIN = -(2 ** 31);

  if (rev > INT_MAX || rev < INT_MIN) {
    return 0;
  }
  return rev;
};
