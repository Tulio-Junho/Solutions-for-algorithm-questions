#define INF 99999
#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Aresta{
    int origem, destino, peso;
};

int prim(list<Aresta> grafo[], int vertices, int origem){
    bool visitado[vertices];
    int pai[vertices], distancia[vertices], atual;

    for(int i = 0; i < vertices; i++){
        visitado[i] = false;
        pai[i] = -1;
        distancia[i] = INF;
    }

    atual = origem;
    distancia[atual] = 0;

    while(true){
        visitado[atual] = true;

        list<Aresta>::iterator it;

        for(it = grafo[atual].begin(); it != grafo[atual].end(); it++){
            int d = it->destino, p = it->peso;

            if(!visitado[d] && p < distancia[d]){
                distancia[d] = p;
                pai[d] = atual;
            }
        }

        int menor_distancia = INF;
        int proximo = -1;

        for(int i = 0; i < vertices; i++){
            if(!visitado[i] && distancia[i] < menor_distancia){
                menor_distancia = distancia[i];
                proximo = i;
            }
        }

        if(proximo == -1)
            break;

        atual = proximo;
    }

    int peso_mst = 0;

    for(int i = 0; i < vertices; i++){
        peso_mst += distancia[i];
    }

    return peso_mst;
}

int main()
{
    int H;
    cin >> H;

    list<Aresta> grafo[H];

    string var;
    int v;

    for(int i = 0; i < H; i++){
        cin >> var >> v;
    }

    int U;
    cin >> U;

    int o, d, p;

    for(int i = 0; i < U; i++){
        cin >> o >> d >> p;
        grafo[o].push_back({o, d, p});
    }

    cout << prim(grafo, H, 0);

    return 0;
}
