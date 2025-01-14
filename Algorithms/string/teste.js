function revertArray(palavra: string) {
  let initial = 0;
  let final = palavra.length - 1;

  while (initial < final) {
    let temp = palavra[initial];
    palavra[initial] = palavra[final];
    palavra[final] = temp;

    initial++;
    final--;
  }
}
