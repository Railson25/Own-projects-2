/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function (s, numRows) {
  if (numRows === 1) return s;
  let result = "";
  const cycle = 2 * numRows - 2;
  for (let i = 0; i < numRows; i++) {
    let step = cycle - 2 * i;
    let currentIdx = i;
    while (currentIdx < s.length) {
      result += s[currentIdx];
      if (i !== 0 && i !== numRows - 1) {
        const nextIdx = currentIdx + step;
        if (nextIdx < s.length) {
          result += s[nextIdx];
        }
      }
      currentIdx += cycle;
    }
  }
  return result;
};
