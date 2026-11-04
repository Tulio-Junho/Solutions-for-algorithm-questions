## Descrição

Soebad Saliv é um cozinheiro renomado e excêntrico. Ele costuma usar espécies exóticas de peixes, pescados na represa de Anatricé em seus preparos.

Atualmente, o prato que tem feito muito sucesso e garantiu vários prêmios para Soebad é sua torta de jaca e peixe. Com isso, inúmeros turistas passam em seu restaurante e fazem pedidos online das suas tortas.

Ele desenvolveu um sistema de precificação para facilitar a venda das tortas.

Sua missão é ajudá-lo a completar esse sistema!

Faça um programa que leia inicialmente a quantidade de tortas T a serem cadastradas no sistema.

Depois, o programa deve ler as características de cada torta T[i] (0 ≤ i < T), que são números reais representando a espessura da massa (EM), o peso (P), o diâmetro (D) e a altura (A) da torta.

O preço final PF da torta é calculado de acordo com a fórmula:

**PF = (EM * P * A + D + A)**

Insira o código i e o preço final PF de cada torta T[i] em uma árvore binária de busca e faça uma listagem em ordem crescente do preço.

**Não esqueça de liberar a memória no final do programa!**

## Entrada

A primeira linha da entrada é a quantidade de tortas T.

Em seguida, serão informadas T linhas com 4 números reais indicando:

- Espessura da massa (EM) da torta T[i];
- Peso (P) da torta T[i];
- Altura (A) da torta T[i];
- Diâmetro (D) da torta T[i];

Onde 0 ≤ i < T.

## Saída

Na saída, o programa deve mostrar o número **i** e o preço **PF** de cada torta (no formato **i:PF**) em ordem crescente de preço.

## Exemplos

**Exemplo de entrada 1**
```text
4
5.1 2.8 8.1 29.8
4.85 3.1 7.9 31.1
4.98 2.89 8 30.9
3.8 2.1 7.95 26.5
```

**Exemplo de saída 1**
```text
3:97
0:153
2:154
1:157
```

**Exemplo de entrada 2**
```text
3
5 3.2 4 28
9 3.4 3 25
6 3.3 5 21
```

**Exemplo de saída 2**
```text
0:96
1:119
2:125
```
