# [ABB2] Organizando Rochas

## Descrição

Sua amiga Isabela está muito atarefada com seu novo emprego como geóloga e precisa de uma forma mais eficiente de organizar os nomes e classificações de suas amostras de rochas.

Para ajudá-la, desenvolva um programa que utilize uma Árvore Binária de Busca (ABB), armazenando o nome e o tipo de cada amostra, ordenando os elementos pelo nome.

O programa deve permitir inserir novas amostras, pesquisar uma amostra pelo nome e remover amostras descartadas, verificando se o nome e o tipo informados correspondem aos dados armazenados na árvore.

## Entrada

A entrada terá quatro opções:

- **1:** Inserir uma amostra. Serão informados o nome e o tipo da rocha.
- **2:** Pesquisar uma amostra pelo nome.
- **3:** Remover uma amostra. Serão informados o nome e o tipo da rocha, que devem corresponder às informações contidas na árvore.
- **0:** Terminar o programa.

## Saída

- Ao pesquisar uma rocha, mostre seu nome e tipo caso seja encontrada, no seguinte formato:

```text
Nome: Arenito
Tipo: Sedimentar
```

- Caso a rocha não seja encontrada durante a pesquisa, mostre `Rocha nao encontrada`.
- Ao remover uma rocha, informe se ela foi removida com sucesso ou não.
- Caso a rocha não seja encontrada para remoção, mostre `Rocha nao encontrada para remocao`.
- Se o usuário informar uma opção diferente de 0, 1, 2 ou 3, mostre `Operação inválida`.

## Exemplo

**Entrada**
```text
1
Arenito
Sedimentar
1
Evaporitos
Sedimentar
1
Basalto
Magmatica
1
Xisto
Metamorfica
1
Diabasio
Magmatica
1
Calcario
Sedimentar
3
Arenito
Magmatica
2
Arenito
3
Arenito
Sedimentar
2
Arenito
0
```

**Saída**
```text
Rocha nao encontrada para remocao
Nome: Arenito
Tipo: Sedimentar
Rocha removida com sucesso
Rocha nao encontrada
```
