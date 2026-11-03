# Biblioteca de Alexandria - Árvore Binária de Busca

Imagine que você é um bibliotecário na renomada Biblioteca de Alexandria. Sua tarefa é organizar uma vasta coleção de manuscritos utilizando uma técnica conhecida como Árvore Binária de Busca (BST).

Cada manuscrito é representado por um número inteiro e deve ser facilmente acessível. Seu desafio é desenvolver um sistema para inserir números de manuscritos na BST e permitir que sejam recuperados rapidamente por meio de buscas.

## Entrada

- **Número de Operações (N):** O primeiro número inteiro indica quantas operações serão realizadas (1 ≤ N ≤ 100).
- **Operações:** Cada uma das próximas N linhas descreve uma operação, que pode ser de dois tipos:
  - `i x`: Insere o inteiro **x**, representando o número de um manuscrito, na árvore binária (-10⁹ ≤ x ≤ 10⁹).
  - `b x`: Busca o inteiro **x** na árvore binária e verifica se o manuscrito está catalogado.

## Saída

Para cada operação de busca (`b x`), imprima:

- `Sim` se o manuscrito estiver catalogado na árvore.
- `Não` se o manuscrito não estiver catalogado.

## Exemplo

**Entrada**
```text
5
i 1023
i 581
i 2048
b 581
b 9999
```

**Saída**
```text
Sim
Não
```
