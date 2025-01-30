# Explicação do Algoritmo de Reversão de Inteiro

Este código tem o objetivo de inverter os dígitos de um número inteiro, considerando:

- A possibilidade de o número ser negativo.
- Os limites de 32 bits: se o número invertido ultrapassar `2^31 - 1` (2147483647) ou ficar abaixo de `-2^31` (-2147483648), o resultado será `0`.

## Passo a Passo

1. Captura do Sinal
   - Verifica se o número é menor que zero.
   - Armazena essa informação em uma variável (`sign = -1` se for negativo, ou `1` caso contrário).
2. Torna o Número Positivo (se necessário)

   - Aplica `Math.abs` para evitar problemas ao extrair os dígitos.

3. Constrói o Número Invertido Usando Operações Matemáticas
   - Enquanto o número original não for `0`, fazemos:
     - `digit = x % 10` (pega o último dígito).
     - `x = Math.floor(x / 10)` (remove o último dígito de `x`).
     - `rev = (rev * 10) + digit` (adiciona o dígito ao resultado, deslocando o valor atual de `rev`).
4. Reaplica o Sinal
   - Se o valor inicial era negativo, multiplica o resultado por `-1`.
5. Verifica Estouro (Overflow)
   - Se o resultado final estiver fora do intervalo [−2³¹, 2³¹−1], retorna `0`.
   - Caso contrário, retorna o valor invertido.

## Exemplos de Uso

- Entrada: `123`
  - Saída: `321`
- Entrada: `-123`
  - Saída: `-321`
- Entrada: `1534236469` (excede o limite ao inverter)
  - Saída: `0`
