/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (number) {
  const strNumber = number.toString();
  let leftIndex = 0;
  let rightIndex = strNumber.length - 1;

  while (leftIndex < rightIndex) {
    if (strNumber[leftIndex] !== strNumber[rightIndex]) {
      return false;
    }
    leftIndex++;
    rightIndex--;
  }
  return true;
};
