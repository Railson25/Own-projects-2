export default function bs_list(haystack: number[], needle: number): boolean {
    let initialPoint = 0;
    let higherPoint = haystack.length;

    do {
        const middle = Math.floor(
            initialPoint + (higherPoint - initialPoint) / 2,
        );

        const value = haystack[middle];

        if (value === needle) {
            return true;
        } else if (value > needle) {
            higherPoint = middle;
        } else {
            initialPoint = middle + 1;
        }
    } while (initialPoint < higherPoint);
    return false;
}
