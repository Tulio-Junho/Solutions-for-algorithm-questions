# ARV - Remover nós

## Descrição

Faça um programa que leia vários números inteiros e os insira em uma árvore binária.

Depois, o programa deve ler um inteiro `x` e remover todos os nós cujo campo `info` seja igual a `x`, mostrando os elementos restantes em ordem crescente.

## Entrada

A entrada consiste em duas linhas:

- A primeira linha contém vários números inteiros, que devem ser inseridos na árvore. Esta linha termina com o número `0`, que não deve ser inserido na árvore.
- A segunda linha contém o valor de `x`, que representa o número a ser removido da árvore.

## Saída

Após remover todos os nós cujo campo `info` seja igual a `x`, o programa deve mostrar os nós restantes em ordem crescente.

## Exemplo

**Entrada**
```text
10 7 4 2 4 5 0
4
```

**Saída**
```text
2 5 7 10
```
