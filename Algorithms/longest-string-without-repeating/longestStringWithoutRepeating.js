/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let maxLength = 0;
  let start = 0;
  let visited = {};

  for (let end = 0; end < s.length; end++) {
    if (visited[s[end]] >= start) {
      start = visited[s[end]] + 1;
    }

    visited[s[end]] = end;

    let currentLength = end - start + 1;

    if (currentLength > maxLength) {
      maxLength = currentLength;
    }
  }

  return maxLength;
};
