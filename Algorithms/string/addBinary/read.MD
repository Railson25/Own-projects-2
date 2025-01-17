## Função `addBinary`

### Descrição

A função `addBinary` soma dois números binários representados como strings e retorna o resultado na forma de uma string binária.

### Parâmetros

- `a`: String que representa um número binário (ex.: `"101"`).
- `b`: String que representa um número binário (ex.: `"11"`).

### Funcionamento

A função utiliza os conceitos de soma binária, com controle de "vai um" (`carry`) para somar os bits correspondentes de duas strings binárias. A soma é realizada da direita para a esquerda, acumulando o resultado final em uma string.

### Exemplo de Uso

```javascript
const a = "1010";
const b = "1011";

console.log(addBinary(a, b)); // Saída: "10101"
```
