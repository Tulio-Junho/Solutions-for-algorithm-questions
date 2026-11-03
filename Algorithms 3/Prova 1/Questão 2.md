## Descrição

Poles está desenvolvendo uma árvore de habilidades para o seu jogo de RPG. Ele quer que os personagens possam escolher, partindo de uma habilidade principal, algumas ramificações possíveis.

Cada habilidade pode ser desbloqueada por diferentes caminhos de upgrades, porém todos os upgrades são direcionados.

Para cada upgrade de habilidade, o personagem deve gastar alguns pontos de experiência e pode adquirir alguma pontuação de poder.

Poles quer saber, dada uma determinada árvore de habilidades, qual é o custo mínimo de experiência necessário para desbloquear todas as habilidades.

## Entrada

A entrada consiste em:

- Um número inteiro `H`, indicando a quantidade de habilidades.
- As `H` linhas seguintes contêm o nome (uma palavra) e o poder (número real) de cada habilidade. Cada habilidade recebe um código automático de `0` a `H-1`, de acordo com a ordem de entrada.
- Um número inteiro `U`, indicando a quantidade de upgrades possíveis.
- As `U` linhas seguintes contêm três números inteiros cada, indicando:
  - Código da habilidade de origem.
  - Código da habilidade de destino.
  - Custo de experiência de cada upgrade.

## Saída

A saída deve conter um número inteiro indicando o custo mínimo de experiência necessário para desbloquear todas as habilidades.

## Exemplo

**Entrada**
```text
10
Base 0
Dash 1
Thief 3
Hunter 3
Assassin 4
BeastMaster 5
Berserker 7
WildMagic 2
Vengeance 4
Life 5
12
0 1 1
1 2 2
1 3 2
3 4 3
3 5 3
3 6 4
0 7 2
7 8 3
7 9 3
1 7 3
8 6 5
2 4 5
```

**Saída**
```text
23
```
