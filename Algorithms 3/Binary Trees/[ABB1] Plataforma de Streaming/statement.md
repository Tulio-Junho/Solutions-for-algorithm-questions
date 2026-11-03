# [ABB1] Plataforma de Streaming

## Descrição

Você está trabalhando em uma nova rede de streaming e, para organizar os filmes na plataforma, decidiu utilizar uma Árvore Binária de Busca (ABB), ordenada pelos nomes dos filmes.

Faça um programa que insira na árvore as informações de cada filme: nome, gênero, duração em minutos, classificação indicativa e ano de lançamento.

Além disso, dado o nome de um determinado filme, o programa deve realizar uma pesquisa na árvore e mostrar todas as informações correspondentes.

## Entrada

A entrada terá três opções:

- **1:** Inserir um filme. O usuário deverá informar o nome, gênero, duração, classificação indicativa e ano do filme.
- **2:** Pesquisar um filme pelo nome. O usuário deverá informar apenas o nome do filme que deseja pesquisar.
- **0:** Sair do programa.

## Saída

Quando um filme for pesquisado:

- Se estiver na árvore, mostre todas as suas informações no seguinte formato:

```text
Nome: Aniquilacao
Genero: Terror
Duracao: 115 mins
Classificacao: 14
Ano: 2018
```

- Caso contrário, mostre a mensagem `Filme nao encontrado`.

Se o usuário informar uma opção diferente de 0, 1 ou 2, mostre a mensagem `Operação invalida`.

## Exemplo

**Entrada**
```text
1
Hereditario
Terror
127
16
2018
1
Aniquilacao
Terror
115
14
2018
1
Maze Runner - Correr ou Morrer
Acao
114
14
2014
1
O Preco do Amanha
Sci-fi
109
12
2011
1
Ex_machina - Instinto Artificial
Sci-fi
108
14
2015
2
Aniquilacao
4
2
Forrest Gump
2
Ex_machina - Instinto Artificial
0
```

**Saída**
```text
Nome: Aniquilacao
Genero: Terror
Duracao: 115 mins
Classificacao: 14
Ano: 2018
Operacao invalida
Filme nao encontrado
Nome: Ex_machina - Instinto Artificial
Genero: Sci-fi
Duracao: 108 mins
Classificacao: 14
Ano: 2015
```
