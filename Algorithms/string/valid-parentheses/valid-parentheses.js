/**
 * @param {string} s
 * @return {boolean}
 */

var isValid = function (s) {
  const parens = {
    ")": "(",
    "}": "{",
    "]": "[",
  };

  const stack = [];

  for (let char of s) {
    if (char in parens) {
      const topElement = stack.length === 0 ? "#" : stack.pop();
      if (topElement !== parens[char]) {
        return false;
      }
    } else {
      stack.push(char);
    }
  }
  return stack.length === 0;
};
