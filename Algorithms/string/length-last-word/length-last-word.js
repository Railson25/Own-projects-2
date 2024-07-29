/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  let length = 0;

  for (let i = 0; i < s.length; i++) {
    if (s[i] !== " ") {
      if (s[i - 1] === " ") {
        length = 1;
      } else {
        length += 1;
      }
    }
  }
  return length;
};
