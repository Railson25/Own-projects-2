function gerarVendasFake(qtd = 1000000) {
  const nomes = [
    "João",
    "Maria",
    "Lucas",
    "Ana",
    "Carlos",
    "Paula",
    "Fernanda",
    "Rafael",
    "Juliana",
    "Bruno",
  ];
  const vendas = [];

  for (let i = 0; i < qtd; i++) {
    const nome = nomes[Math.floor(Math.random() * nomes.length)];
    const valor = Math.floor(Math.random() * (20000 - 10 + 1)) + 10;
    vendas.push({ name: nome, valor: valor.toString() });
  }

  return vendas;
}

class MaxHeap {
  constructor() {
    this.heap = [];
  }

  insert(venda) {
    this.heap.push(venda);
    this.subir(this.heap.length - 1);
  }

  subir(index) {
    while (index > 0) {
      const pai = Math.floor((index - 1) / 2);
      if (parseInt(this.heap[index].valor) > parseInt(this.heap[pai].valor)) {
        this.trocar(index, pai);
        index = pai;
      } else {
        break;
      }
    }
  }

  remover() {
    if (this.heap.length === 0) return undefined;
    if (this.heap.length === 1) return this.heap.pop();

    const topo = this.heap[0];
    this.heap[0] = this.heap.pop();
    this.descer(0);
    return topo;
  }

  descer(index) {
    const n = this.heap.length;
    while (true) {
      const esquerda = 2 * index + 1;
      const direita = 2 * index + 2;
      let maior = index;

      if (
        esquerda < n &&
        parseInt(this.heap[esquerda].valor) > parseInt(this.heap[maior].valor)
      ) {
        maior = esquerda;
      }

      if (
        direita < n &&
        parseInt(this.heap[direita].valor) > parseInt(this.heap[maior].valor)
      ) {
        maior = direita;
      }

      if (maior !== index) {
        this.trocar(index, maior);
        index = maior;
      } else {
        break;
      }
    }
  }

  trocar(i, j) {
    const temp = this.heap[i];
    this.heap[i] = this.heap[j];
    this.heap[j] = temp;
  }
}

// Generate 10,000 sales
const vendas = gerarVendasFake();

// ==========================
// 🔼 MÉTODO COM HEAP
// ==========================
console.time("⏱️ Heap");

const heap = new MaxHeap();
for (let i = 0; i < vendas.length; i++) {
  heap.insert(vendas[i]);
}

const top10Heap = [];
for (let i = 0; i < 10; i++) {
  const maior = heap.remover();
  if (maior) top10Heap.push(maior);
}

console.timeEnd("⏱️ Heap");
console.log("📊 Top 10 com Heap:");
for (let i = 0; i < top10Heap.length; i++) {
  const v = top10Heap[i];
  console.log(
    `${i + 1}º ${v.name} vendeu R$ ${parseInt(v.valor).toLocaleString("pt-BR")}`
  );
}

// ==========================
// 🔽 MÉTODO COM SORT
// ==========================
console.time("⏱️ Sort");

const top10Sort = [...vendas]
  .sort((a, b) => parseInt(b.valor) - parseInt(a.valor))
  .slice(0, 10);

console.timeEnd("⏱️ Sort");
console.log("📊 Top 10 com Sort:");
for (let i = 0; i < top10Sort.length; i++) {
  const v = top10Sort[i];
  console.log(
    `${i + 1}º ${v.name} vendeu R$ ${parseInt(v.valor).toLocaleString("pt-BR")}`
  );
}
