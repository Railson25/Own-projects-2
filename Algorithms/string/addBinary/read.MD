## `addBinary` Function

### Description

The `addBinary` function adds two binary numbers represented as strings and returns the result as a binary string.

### Parameters

- `a`: A string representing a binary number (e.g., `"101"`).
- `b`: A string representing a binary number (e.g., `"11"`).

### How It Works

The function uses the concept of binary addition, including a "carry" to account for overflow when adding the corresponding bits of two binary strings. The addition is performed from right to left, accumulating the final result in a string.

### Example Usage

```javascript
const a = "1010";
const b = "1011";

console.log(addBinary(a, b)); // Output: "10101"
```
