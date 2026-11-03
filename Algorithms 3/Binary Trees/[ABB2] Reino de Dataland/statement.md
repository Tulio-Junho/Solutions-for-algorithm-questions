# [ABB2] Reino de Dataland

## Descrição

No reino de Dataland, os dados são organizados em estruturas chamadas Árvores Binárias de Busca (BST).

Você recebeu a tarefa de gerenciar essas árvores, realizando operações de inserção, remoção e busca de elementos.

Desenvolva um programa que permita adicionar e remover elementos da árvore, além de verificar se determinado elemento ainda está presente após as operações realizadas.

## Entrada

- **Número de Operações (N):** O primeiro número inteiro indica quantas operações serão realizadas (1 ≤ N ≤ 100).
- **Operações:** Cada uma das próximas N linhas descreve uma operação, que pode ser de três tipos:
  - `i x`: Insere o inteiro **x** na árvore binária (-10⁹ ≤ x ≤ 10⁹).
  - `r x`: Remove o inteiro **x** da árvore binária.
  - `b x`: Busca o inteiro **x** na árvore binária e verifica se ele ainda está presente.

## Saída

Para cada operação de busca (`b x`), imprima:

- `Sim` se o elemento **x** ainda estiver presente na árvore.
- `Não` se o elemento **x** não estiver presente na árvore.

## Exemplo

**Entrada**
```text
7
i 50
i 30
i 70
r 30
b 30
b 50
b 70
```

**Saída**
```text
Não
Sim
Sim
```
