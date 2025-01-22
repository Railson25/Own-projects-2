# Merge Sorted Array

Este código resolve o problema de mesclar dois arrays ordenados, `nums1` e `nums2`, dentro do array `nums1`. O resultado final será um único array ordenado armazenado no próprio `nums1`.

## Como funciona

1. `nums1` possui espaço extra no final para acomodar os elementos de `nums2`.

2. O algoritmo começa a preencher `nums1` de trás para frente para evitar sobrescrever elementos ainda não processados.

3. Dois ponteiros (`i` e `j`) são usados:

   - `i`: Aponta para o último elemento válido de `nums1`.
   - `j`: Aponta para o último elemento de `nums2`.

4. O maior elemento entre `nums1[i]` e `nums2[j]` é colocado na posição correta em `nums1`.

5. O processo continua até todos os elementos de `nums2` serem adicionados a `nums1`.
