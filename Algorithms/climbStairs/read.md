# Climbing Stairs

Este projeto resolve o problema de calcular o número de maneiras distintas de subir uma escada com `n` degraus, onde é possível dar passos de **1** ou **2 degraus** de cada vez.

## 📘 Descrição

O problema segue um padrão semelhante à sequência de Fibonacci, onde:

- Para alcançar o degrau `n`, você pode:
  - Vir do degrau `n-1` (1 passo).
  - Vir do degrau `n-2` (2 passos).
- O total de maneiras de alcançar o degrau `n` é a soma das maneiras de alcançar `n-1` e `n-2`.

## 🧮 Complexidade

- **Tempo:** \( O(n) \) — o algoritmo percorre uma única vez até \( n \).
- **Espaço:** \( O(1) \) — utiliza apenas variáveis constantes para calcular o resultado.

## 📊 Exemplo

- **Entrada:** `n = 5`
- **Saída:** `8`
  - Maneiras possíveis:
    1. (1+1+1+1+1)
    2. (1+1+1+2)
    3. (1+1+2+1)
    4. (1+2+1+1)
    5. (2+1+1+1)
    6. (1+2+2)
    7. (2+1+2)
    8. (2+2+1)

## 🚀 Como Usar

1. Insira o valor de `n` (o número de degraus da escada).
2. O algoritmo retornará o número total de maneiras possíveis de alcançar o topo da escada.

## 🛠️ Aplicações

Este algoritmo pode ser usado em problemas que envolvem:

- Movimentos discretos em escadas ou grades.
- Contagem de combinações em jogos ou sistemas com opções limitadas de avanço.
