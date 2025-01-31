# 🔀 Zigzag Conversion

Este código converte uma string para um formato zigzag e depois a reorganiza em uma nova ordem, conforme o número de linhas (`numRows`) especificado.

## 📌 Como funciona?

1. Verificação Inicial

   - Se `numRows === 1`, a string já está na forma final, então é retornada diretamente.

2. Definição do Ciclo

   - O ciclo define o padrão de repetição do zigue-zague:
     ```js
     cycle = 2 * numRows - 2;
     ```
   - Isso significa que um bloco completo do padrão se repete a cada `cycle` caracteres.

3. Iteração pelas Linhas

   - O código percorre cada linha do padrão zigzag e adiciona as letras correspondentes ao resultado final.

4. Construção do Resultado
   - Para cada linha:
     - Pega os caracteres que aparecem diretamente na linha.
     - Se não for a primeira ou última linha, também adiciona os caracteres intermediários da diagonal.

## 🔎 Exemplo de Entrada e Saída

```js
convert("PAYPALISHIRING", 3);

P   A   H   N
A P L S I I G
Y   I   R
```
