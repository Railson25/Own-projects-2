/**
 * @param {string} s
 * @return {number}
 */

var scoreOfString = function (s) {
  let score = 0;

  function absValue(x) {
    if (x < 0) {
      return -x;
    } else {
      return x;
    }
  }

  for (let i = 0; i < s.length - 1; i++) {
    const char = s.charCodeAt(i);
    const nextChar = s.charCodeAt(i + 1);
    const diff = char - nextChar;
    score += absValue(diff);
  }

  return score;
};
