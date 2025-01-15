/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */

var searchInsert = function (nums, target) {
  let lower = 0;
  let higher = nums.length - 1;

  for (; lower <= higher; ) {
    let middle = Math.floor((lower + higher) / 2);

    if (nums[middle] === target) {
      return middle;
    } else if (nums[middle] < target) {
      lower = middle + 1;
    } else {
      higher = middle - 1;
    }
  }
  return lower;
};
