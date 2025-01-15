### O que esse algoritmo faz?

O algoritmo chamado `searchInsert` tem uma missão simples: encontrar onde um número (target) está em uma lista ordenada (nums) ou onde ele deveria estar se não estiver na lista.

---

### Como funciona? 🧐

Pense na lista de números como um livro de páginas numeradas e queremos descobrir onde está a página com um certo número. Só que, em vez de folhear página por página, usamos um truque chamado Busca Binária. É assim:

1. Começamos no meio do livro (ou lista).
2. Olhamos o número da página:
   - Se for o número que procuramos, já encontramos! 🎉
   - Se o número for menor que o nosso, ignoramos tudo à esquerda e olhamos só à direita.
   - Se for maior, ignoramos tudo à direita e olhamos só à esquerda.
3. Repetimos o processo até encontrar o número ou até perceber onde ele deveria estar.
4. Se não encontramos o número, devolvemos a posição onde ele deveria entrar.

---

### Resumo do algoritmo em passos simples:

1. Definir os limites: Começamos com dois pontos, o início (`lower`) e o final (`higher`) da lista.
2. Dividir ao meio: Calculamos o meio da lista e verificamos:
   - Achamos o número? Retornamos o índice.
   - Não achamos? Ajustamos os limites para olhar só a parte necessária.
3. Continuar até acabar: Repetimos até não ter mais partes para dividir.
4. Resultado final: Se o número não está lá, retornamos onde ele deveria entrar.

---

### Exemplo:

Lista: `[1, 3, 5, 6]`  
Procuramos: `5`

1. Começamos no meio: o número no índice `2` é `5`. Achamos! Retornamos `2`. ✅

Agora, procuramos: `2`

1. Começamos no meio: o número no índice `2` é `5`. `2` é menor, então olhamos à esquerda.
2. No meio dessa parte, o número no índice `1` é `3`. `2` é menor, então olhamos à esquerda de novo.
3. Não sobrou nada! `2` deveria entrar no índice `1`. Retornamos `1`.

---

### Por que é útil?

- Rápido e eficiente: Divide o trabalho pela metade em cada passo.
- Ideal para listas grandes. 🚀

---

Pronto! Agora você sabe o que o `searchInsert` faz. 🎉
