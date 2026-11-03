
O prefeito de Anatriacé, Leon Jaspos, está sendo muito criticado pelas inundações constantes na cidade. Ele está reativando um sistema de drenagem de água e contratou você para ajudar a resolver o problema.

A cidade conta com algumas bombas de água conectadas a um sistema de encanamentos que leva até as regiões alagadas. Porém, essas bombas foram compradas com capacidade um pouco abaixo da definida em projeto, para que sobrasse dinheiro da licitação e o prefeito pudesse fazer uma manutenção em seu iate particular.

O prefeito possui um mapa com todas as bombas e suas conexões com as regiões alagadas, contendo o comprimento de cada encanamento.

Sabendo que a bomba tem capacidade para atender todas as regiões que estejam a uma distância menor ou igual a **15 km**, ele precisa saber quais regiões continuarão alagadas, considerando o local de instalação da bomba.

## Entrada

A entrada consiste em:

- Um número inteiro `R`, indicando a quantidade de regiões alagadas.
- Um número inteiro `C`, indicando a quantidade de encanamentos.
- As `C` linhas seguintes contêm três números inteiros cada, indicando:
  - Código da região de origem.
  - Código da região de destino.
  - Comprimento do encanamento em quilômetros.
- Por fim, um número inteiro `B`, indicando a região onde a bomba será instalada.

## Saída

O programa deve apresentar uma lista com os códigos das regiões que continuarão alagadas, ou seja, aquelas cuja menor distância a partir da bomba seja superior a **15 km**.

Caso nenhuma região continue alagada, apresente a mensagem:

```text
Nenhuma região alagada
```

## Exemplo

**Entrada**
```text
6
7
0 1 5
0 2 10
1 3 4
1 4 8
2 4 3
3 5 6
4 5 2
0
```

**Saída**
```text
5
```
