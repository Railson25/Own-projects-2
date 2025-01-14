// /**
//  * @param {character[]} s
//  * @return {void} Do not return anything, modify s in-place instead.
//  */
// var reverseString = function (s) {
//   let left = 0;
//   let right = s.length - 1;

//   while (left < right) {
//     let temp = s[left];
//     s[left] = s[right];
//     s[right] = temp;

//     left++;
//     right--;
//   }
// };

function reverseString(word) {
  let reverseWord = "";
  for (let i = word.length - 1; i >= 0; i--) {
    reverseWord += word[i];
  }
  return reverseWord;
}

console.log(reverseString("hello"));
