/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
  let initialPoint = 0;
  let higherPoint = nums.length;

  do {
    const midlleOfArray = Math.floor(
      initialPoint + (higherPoint - initialPoint) / 2
    );
    const value = nums[midlleOfArray];

    if (value === target) {
      return midlleOfArray;
    } else if (value > target) {
      higherPoint = midlleOfArray;
    } else {
      initialPoint = midlleOfArray + 1;
    }
  } while (initialPoint < higherPoint);
  return -1;
};
