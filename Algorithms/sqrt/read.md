# Square Root Function (`mySqrt`)

## Descrição

Esta função implementa uma solução eficiente para calcular a raiz quadrada inteira arredondada para baixo de um número não negativo \(x\). Ela utiliza o método de busca binária para encontrar o maior número inteiro \(k\) tal que \(k^2 \leq x\).

## Regras

- Se \(x = 0\) ou \(x = 1\), o resultado é o próprio \(x\).
- Não são usadas funções embutidas para raiz quadrada, como `Math.sqrt`.

---

## Como o código funciona

### Lógica

1. Definimos um intervalo inicial:

   - `left = 0` (o menor possível).

   - `right = x` (o maior possível).

2. A cada iteração, calculamos o ponto médio `mid` do intervalo.

3. Verificamos:

   - Se \( \text{mid}^2 = x \): encontramos a raiz exata e retornamos `mid`.

   - Se \( \text{mid}^2 < x \): ajustamos o intervalo para a direita (`left = mid + 1`) e armazenamos `mid` como o melhor candidato até agora.

   - Se \( \text{mid}^2 > x \): ajustamos o intervalo para a esquerda (`right = mid - 1`).

4. Continuamos até que `left > right`.

5. Retornamos o maior valor armazenado em `result`.
