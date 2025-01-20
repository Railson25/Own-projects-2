# Remove Nth Node From End of List

## Descrição

Esta função remove o n-ésimo nó a partir do final de uma lista encadeada e retorna a cabeça da lista atualizada.

## Como Funciona

### Etapas do Algoritmo

1. Calcular o comprimento da lista:

   - Percorremos a lista inteira para determinar o comprimento total.
   - Armazenamos esse valor em `length`.

2. Identificar o índice do nó a ser removido:

   - Subtraímos `n` do comprimento total para encontrar a posição do nó alvo a partir do início (`targetIndex`).

3. Verificar se o nó a ser removido é o primeiro:

   - Se `targetIndex === 0`, o nó a ser removido é a cabeça da lista.
   - Retornamos `head.next` para atualizar a cabeça.

4. Navegar até o nó anterior ao alvo:

   - Percorremos a lista até o índice `targetIndex - 1`.

5. Remover o nó alvo:

   - Ajustamos o ponteiro `next` do nó atual para pular o nó alvo:
     ```javascript
     current.next = current.next.next;
     ```

6. Retornar a cabeça da lista:
   - A lista atualizada é retornada.

---
