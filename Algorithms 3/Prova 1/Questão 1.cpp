#define INF 99999
#include <iostream>
#include <list>
using namespace std;
struct Aresta{
  int origem, destino, peso;
};

void dijkstra(list<Aresta> grafo[], int vertices, int origem){
  bool visitado[vertices];
  int pai[vertices], distancia[vertices], atual;
  list<Aresta>::iterator it;

  for(int i=0; i<vertices; i++){
    visitado[i] = false;
    pai[i] = -1;
    distancia[i] = INF;
  }
  distancia[origem] = 0;
  atual = origem;

  while(!visitado[atual]){
    visitado[atual] = true;
    for(it = grafo[atual].begin(); it != grafo[atual].end(); it++){
      int d = it->destino, p = it->peso;
      if(!visitado[d] && distancia[atual] + p < distancia[d]){
        distancia[d] = distancia[atual] + p;
        pai[d] = atual;
      }
    }
    int menor_distancia = INF;
    for(int i=0; i<vertices; i++){
      if(!visitado[i] && distancia[i] < menor_distancia){
        menor_distancia = distancia[i];
        atual = i;
      }
    }
  }
  
  bool alagado = true;
  for(int i = 0; i < vertices; i++)
  {
    if(distancia[i] > 15)
    {
        cout << i << endl;
        alagado = false;
    }    
}

    if(alagado)
        cout << "Nenhuma região alagada" << endl;

}

int main()
{
    int R;
    cin >> R;
    list<Aresta> grafo[R];

    int C;
    cin >> C;

    int origem, destino, peso;

    for(int i = 0; i < C; i++)
    {
        cin >> origem >> destino >> peso;
        grafo[origem].push_back({origem,destino,peso});
        grafo[destino].push_back({origem,destino,peso});
    }

    cin >> origem;

    dijkstra(grafo, R, origem);


    return 0;
}
