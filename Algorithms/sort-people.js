/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function (names, heights) {
  for (let i = 0; i < heights.length; i++) {
    for (let j = 0; j < heights.length - 1 - i; j++) {
      if (heights[j] < heights[j + 1]) {
        const swapHeight = heights[j];
        heights[j] = heights[j + 1];
        heights[j + 1] = swapHeight;

        const swapName = names[j];
        names[j] = names[j + 1];
        names[j + 1] = swapName;
      }
    }
  }

  // Retorna a lista de nomes ordenada
  return names;
};
