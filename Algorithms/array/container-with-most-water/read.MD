# 💧 Container With Most Water

Este é um algoritmo em JavaScript que encontra a maior quantidade de água que pode ser armazenada entre duas linhas verticais, representadas por um array de alturas.

---

## 🧠 Objetivo

Dado um array de inteiros `height`, onde cada valor representa a altura de uma linha vertical em um gráfico, o algoritmo busca **duas linhas** que formem um container capaz de armazenar **a maior quantidade possível de água**.

A quantidade de água entre as duas linhas depende de:

- A **distância** entre os dois índices (largura)
- A **menor altura** entre as duas linhas

---

## 📐 Fórmula da área

A = (j - i) \times h

Com:

h =
\begin{cases}
\text{height}[i], & \text{se } \text{height}[i] \leq \text{height}[j] \\
\text{height}[j], & \text{se } \text{height}[j] < \text{height}[i]
\end{cases}

---

## 📥 Exemplo de entrada

```js
const height = [1,8,6,2,5,4,8,3,7];

## 📤 Exemplo de saída (output)
49

Tempo: O(n)
O algoritmo percorre o array apenas uma vez com dois ponteiros.

Espaço: O(1)
Utiliza apenas variáveis auxiliares simples.

Nenhuma estrutura adicional proporcional a n é alocada.
```
