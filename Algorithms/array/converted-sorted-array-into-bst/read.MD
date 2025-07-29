# 📐 sortedArrayToBST

Este é um algoritmo em JavaScript que converte um array de inteiros **ordenado** (em ordem crescente) em uma **árvore binária de busca balanceada** (Balanced Binary Search Tree - BST).

---

## 🧠 Objetivo

Criar uma árvore binária de busca balanceada, onde:

- Para cada nó, todos os valores na subárvore da esquerda são **menores** que ele.
- Todos os valores na subárvore da direita são **maiores** que ele.
- A árvore é **balanceada**, ou seja, a profundidade de cada lado não varia muito (a diferença entre os lados nunca é maior que 1).

---

## 📥 Exemplo de entrada

```js
const nums = [-10, -3, 0, 5, 9];
```

## 📤 Exemplo de saída (output)

A árvore gerada será:

        0
       / \
    -10   5
      \    \
      -3    9

Tempo: O(n)
Cada elemento do array é processado uma única vez.

Espaço: O(n)
Em cada chamada recursiva, alocamos um novo nó.
