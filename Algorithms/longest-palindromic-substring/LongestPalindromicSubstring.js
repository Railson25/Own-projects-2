/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function (s) {
  if (s.length < 1) return "";

  let start = 0;
  let end = 0;

  const expandAroundCenter = (left, right) => {
    while (left >= 0 && right < s.length && s[left] === s[right]) {
      left--;
      right++;
    }
    return right - left - 1;
  };

  for (let i = 0; i < s.length; i++) {
    const length1 = expandAroundCenter(i, i);
    const length2 = expandAroundCenter(i, i + 1);

    let maxLength;
    if (length1 > length2) {
      maxLength = length1;
    } else {
      maxLength = length2;
    }

    if (maxLength > end - start) {
      start = i - Math.floor((maxLength - 1) / 2);
      end = i + Math.floor(maxLength / 2);
    }
  }

  let result = "";
  for (let i = start; i <= end; i++) {
    result += s[i];
  }

  return result;
};
