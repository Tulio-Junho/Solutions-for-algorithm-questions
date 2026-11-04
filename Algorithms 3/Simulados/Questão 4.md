## Descrição

Vamos evoluir o sistema de Soebad Saliv!

Com o sucesso da torta de jaca e peixe, Soebad passou a produzir tortas de vários tamanhos, e o cardápio muda o tempo todo. Agora, o sistema deve permitir a inserção, a listagem e a remoção de tortas.

Caso o usuário deseje inserir uma nova torta, o programa deve ler suas características.

Primeiro, ele deve ler um número inteiro que corresponde ao código da torta. Em seguida, serão informados quatro números reais que representam a espessura da massa (EM), o peso (P), a altura (A) e o diâmetro (D) da torta.

O preço final PF de cada torta deve ser calculado de acordo com a fórmula:

**PF = int(EM * P * A + D + A)**

Ou seja, a parte fracionária é descartada.

Insira o código e o preço final de cada torta em uma árvore binária de busca, usando o preço como chave. Em caso de empate de preço, a nova torta deve ser inserida na subárvore direita.

Muitos turistas fazem pedidos com um orçamento limitado. Por isso, o usuário pode informar um valor de orçamento Omax, e todas as tortas com preço menor ou igual a esse valor devem ser apresentadas em ordem crescente de preço.

Por fim, Soebad decidiu que, de tempos em tempos, vai elevar o padrão do restaurante.

Para isso, o usuário deve informar um preço mínimo Pmin. Todas as tortas com preço estritamente menor que esse valor devem ser removidas da árvore binária de busca, mantendo a estrutura dos dados.

O usuário pode fazer quantas operações desejar. O programa termina quando o usuário escolher a opção de sair.

**Não esqueça de liberar a memória no final do programa!**

## Entrada

Cada linha da entrada começa com um inteiro indicando a opção escolhida:

- `1` - Inserir uma nova torta;
- `2` - Listar tortas;
- `3` - Remover tortas;
- `4` - Sair.

Caso a opção escolhida seja **1**, serão informadas as características de uma torta, na seguinte ordem:

- O código `i` (inteiro, único para cada torta);
- A espessura da massa (EM);
- O peso (P);
- A altura (A);
- O diâmetro (D).

Caso a opção escolhida seja **2**, será informado um valor real Omax (o orçamento) para indicar quais tortas devem ser listadas.

Caso a opção escolhida seja **3**, será informado um valor real Pmin (o preço mínimo) para indicar quais tortas devem ser removidas.

Por fim, se a opção escolhida for **4**, o programa é encerrado.

## Saída

Sempre que a opção 2 for escolhida, o programa deve mostrar o código `i` e o preço `PF` de cada torta (no formato `i:PF`), uma por linha, fazendo uma varredura em ordem crescente na árvore binária de busca e considerando apenas as tortas com preço menor ou igual a Omax.

Se nenhuma torta satisfizer a condição, deve ser impresso apenas um hífen (`-`).
