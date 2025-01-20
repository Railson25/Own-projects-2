# Longest Palindromic Substring

## Sobre o Código

Este código implementa uma solução para encontrar a substring palíndroma mais longa em uma string fornecida. Um palíndromo é uma sequência que pode ser lida da mesma forma de trás para frente, como "arara" ou "radar".

A solução utiliza o método de "Expand Around Center" para verificar todas as substrings possíveis de forma eficiente, evitando verificar substrings desnecessárias.

---

## Como Funciona

1. Entrada e Saída:

   - Entrada: Uma string `s`.
   - Saída: A substring palíndroma mais longa.

2. Lógica Principal:

   - O algoritmo trata cada caractere como um centro potencial de um palíndromo.

   - Ele verifica dois tipos de centros:

     - Um único caractere (palíndromos com comprimento ímpar, como "aba").
     - Dois caracteres adjacentes (palíndromos com comprimento par, como "abba").

   - A função `expandAroundCenter` expande ao redor desse centro, comparando caracteres à esquerda e à direita enquanto eles forem iguais.

3. Variáveis Importantes:

   - `start` e `end`: Guardam os índices de início e fim do palíndromo mais longo encontrado até o momento.

   - `maxLength`: Calcula o comprimento do maior palíndromo para cada centro.

4. Complexidade:
   - Tempo: O(n²), onde `n` é o comprimento da string, devido à expansão para cada centro.
   - Espaço: O(1), pois nenhuma estrutura adicional é usada.

---
