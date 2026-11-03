# Árvore Binária - O Tesouro de Laka

## Descrição

Jovem Laka é um pirata que adora sair pelo mundo em busca de baús. Porém, esses baús não possuem ouro, mas sim chocolates.

Talento era o nome do pai de Laka e, antes de morrer, disse ao filho que todos os mapas de chocolate possuem um padrão: cada número representa uma cidade e, ao inserir esses números em uma árvore binária, é possível verificar qual é o melhor caminho para chegar ao tesouro, localizado na cidade `X`.

Laka sempre sabe em qual cidade está o chocolate. Portanto, desenvolva um programa que, após receber as cidades, determine qual percurso permite encontrar o tesouro mais rapidamente.

## Entrada

A entrada consiste em:

- Uma sequência de `N` números inteiros, que representam as cidades e devem ser inseridos na árvore. A leitura termina quando for informado o número `-1`, que não deve ser inserido na árvore.
- Após isso, será fornecido um número inteiro `X`, que representa a cidade onde está localizado o chocolate.

## Saída

A saída deve conter uma das seguintes opções:

- `Pre`: Percurso em Pré-Ordem.
- `Em`: Percurso em Ordem.
- `Pos`: Percurso em Pós-Ordem.

Deve ser informado qual dos três percursos encontra a cidade `X` mais rapidamente. Considere que não haverá empate.

## Exemplo

**Entrada**
```text
10 7 15 2 8 12 20 3 -1
8
```

**Saída**
```text
Pos
```

No exemplo acima, os percursos mostrariam as cidades nas seguintes ordens:

**Pré-Ordem:** 10 7 2 3 **8** 15 12 20

**Em-Ordem:** 2 3 7 **8** 10 12 15 20

**Pós-Ordem:** 3 2 **8** 7 12 20 15 10

Repare que a resposta é `Pos`, pois o percurso em Pós-Ordem encontra a cidade informada primeiro.
