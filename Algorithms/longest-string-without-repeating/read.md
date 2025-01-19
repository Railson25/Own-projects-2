# Longest Substring Without Repeating Characters

## Explicação do Algoritmo

Este algoritmo encontra o comprimento da maior substring sem caracteres repetidos dentro de uma string fornecida.

### Estratégia Utilizada: Janela Deslizante (Sliding Window)

1. Janela Deslizante:

   - A "janela" é definida entre dois ponteiros, `start` (início da janela) e `end` (fim da janela).
   - À medida que percorremos a string com o ponteiro `end`, expandimos a janela para incluir o caractere atual.

2. Controle de Repetição:

   - Um objeto `visited` armazena as posições das últimas ocorrências de cada caractere.
   - Quando encontramos um caractere repetido dentro da janela, ajustamos o início da janela (`start`) para logo após a última ocorrência desse caractere repetido.

3. Cálculo do Comprimento:

   - Em cada passo, o comprimento da janela atual é calculado como `end - start + 1`.
   - Se o comprimento atual for maior que o `maxLength` registrado, atualizamos o valor de `maxLength`.

4. Resultado Final:
   - Ao final do loop, o `maxLength` contém o comprimento da maior substring sem repetição encontrada.

---

### Como o Algoritmo Funciona (Passo a Passo)

Exemplo: Dada a string `"abcabcbb"`

1. Iteração 0:

   - Letra: `'a'`
   - Janela: `"a"`
   - Comprimento: `1` → `maxLength = 1`.

2. Iteração 1:

   - Letra: `'b'`
   - Janela: `"ab"`
   - Comprimento: `2` → `maxLength = 2`.

3. Iteração 2:

   - Letra: `'c'`
   - Janela: `"abc"`
   - Comprimento: `3` → `maxLength = 3`.

4. Iteração 3:

   - Letra: `'a'` (repetida)
   - Movemos o início da janela para logo após a última ocorrência de `'a'`.
   - Nova Janela: `"bca"`

5. Iteração 4:

   - Letra: `'b'` (repetida)
   - Movemos o início da janela para logo após a última ocorrência de `'b'`.
   - Nova Janela: `"cab"`

6. Iteração 5:

   - Letra: `'c'` (repetida)
   - Movemos o início da janela para logo após a última ocorrência de `'c'`.
   - Nova Janela: `"abc"`

7. Iterações 6 e 7:
   - Repetições consecutivas de `'b'` ajustam a janela, mas o comprimento máximo permanece `3`.

Resultado Final: O comprimento da maior substring sem repetição é 3 (`"abc"`).

---

### Complexidade do Algoritmo

- Tempo: \( O(n) \)
  - Cada caractere da string é processado no máximo duas vezes (uma ao expandir a janela, outra ao ajustar `start`).
- Espaço: \( O(min(n, a)) \)
  - O espaço necessário depende do número de caracteres distintos na string (`a`) ou do comprimento da string (`n`), o que for menor.

---

### Aplicação

Este algoritmo é eficiente e amplamente usado em problemas que envolvem substrings, como processamento de textos, análise de padrões, ou até em sistemas de recomendação baseados em sequência.
