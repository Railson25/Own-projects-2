/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle = "hello") {
  if (needle === "") {
    return 0;
  }

  let stackLength = haystack.length;
  let needleLength = needle.length;

  for (let i = 0; i <= stackLength - needleLength; i++) {
    let j = 0;

    while (j < needleLength && haystack[i + j] === needle[j]) {
      j++;
    }
    if (j === needleLength) {
      return i;
    }
  }

  return -1;
};
