/**
 * @param {number[]} digits
 * @return {number[]}
 */

digits = [9, 9, 9, 0];
var plusOne = function (digits) {
  for (let i = digits.length - 1; i >= 0; i--) {
    if (digits[i] < 9) {
      digits[i]++;
      return digits;
    }
    digits[i] = 0;
  }
  digits.length = digits.length + 1;
  for (let i = digits.length - 1; i > 0; i--) {
    digits[i] = digits[i - 1];
  }
  digits[0] = 1;
  return digits;
};
