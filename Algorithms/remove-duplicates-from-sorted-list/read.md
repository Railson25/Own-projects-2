# Remove Duplicates from Sorted Linked List

## Descrição

Este código remove valores duplicados de uma linked list ordenada, garantindo que cada valor apareça apenas uma vez. A lista resultante permanece ordenada.

## Como funciona

1. Entrada:

   - Uma linked list ordenada, onde cada nó contém um valor (`val`) e uma referência para o próximo nó (`next`).
   - Exemplo: `[1 -> 1 -> 2 -> 3 -> 3]`.

2. Processo:

   - O código percorre a lista nó por nó.
   - Se o valor do nó atual (`current.val`) for igual ao do próximo nó (`current.next.val`), ele "pula" o próximo nó ajustando o ponteiro `next`.
   - Caso contrário, avança para o próximo nó.

3. Saída:
   - Uma linked list sem duplicatas, preservando a ordem original.
   - Exemplo de saída: `[1 -> 2 -> 3]`.

## Complexidade

- Tempo: O(n), pois percorre cada nó uma única vez.
- Espaço: O(1), já que a manipulação é feita in-place.

## Exemplo de uso

### Entrada

```javascript
head = [1, 1, 2, 3, 3];
```
