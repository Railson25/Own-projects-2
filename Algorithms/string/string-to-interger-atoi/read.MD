# 🧮 myAtoi (String to Integer)

Implementação manual da função `myAtoi`, que converte uma string em um número inteiro de 32 bits com sinal, seguindo as regras do problema.

---

## ⚙️ Como funciona o algoritmo

1. **Ignora espaços em branco no início**
2. **Verifica se há sinal** (`+` ou `-`)
3. **Lê caractere por caractere**, convertendo de `'0'` a `'9'` em número
4. **Constrói o número** multiplicando por 10 e somando os dígitos
5. **Aplica o sinal**
6. **Limita o valor dentro do intervalo `[-2³¹, 2³¹ − 1]`**

---

## ✅ Exemplo

### Entrada:

```js
s = "   -042"


Saída:


-42

⚙️ Complexidade
Tipo	Valor
Tempo	O(n)
Espaço	O(1)
```
