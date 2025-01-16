# plusOne Function

## What does this code do?

This function takes a list of digits (like [9, 9, 9, 0]) and adds 1 to the number they represent. Imagine the digits are parts of a very big number, and we need to make it one bigger.

For example:

- Input: [1, 2, 3] (which means 123)
- Output: [1, 2, 4] (because 123 + 1 = 124)

If all the digits are 9, like [9, 9, 9], the function will handle it by making the number bigger:

- Input: [9, 9, 9]
- Output: [1, 0, 0, 0] (because 999 + 1 = 1000)

---

## How does it work?

1. **Start from the last digit:** The function begins by checking the rightmost digit (like the "ones place" in a number).

   - If it’s less than 9, we just add 1 and stop. Easy!

2. **Handle 9s turning into 0s:** If a digit is 9, adding 1 makes it 10, so we change that digit to 0 and move to the next digit on the left.

3. **If all digits are 9:** When all the digits are 9, the function makes the array bigger by adding a new 1 at the front. For example, [9, 9, 9] becomes [1, 0, 0, 0].
