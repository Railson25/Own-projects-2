export default function two_crystal_balls(breaks: boolean[]): number {
    const jumpAmount = Math.floor(Math.sqrt(breaks.length));
    let initialPoint = jumpAmount;

    for (; initialPoint < breaks.length; initialPoint += jumpAmount) {
        if (breaks[initialPoint]) {
            break;
        }
    }

    initialPoint -= jumpAmount;

    for (
        let jump = 0;
        jump < jumpAmount && initialPoint < breaks.length;
        jump++, initialPoint++
    ) {
        if (breaks[initialPoint]) {
            return initialPoint;
        }
    }
    return -1;
}
