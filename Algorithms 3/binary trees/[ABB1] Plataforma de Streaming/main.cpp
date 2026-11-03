#include<iostream>
using namespace std;

struct node{
  string data, genero;
  int duracao, idade, ano;
  struct node * left;
  struct node * right;
};

void insert(node * & current, string data, string genero, int duracao, int idade, int ano){
  if(current == NULL){
    current = new node;
    current->data = data;
    current->genero = genero;
    current->duracao = duracao;
    current->idade = idade;
    current->ano = ano;
    current->left = NULL;
    current->right = NULL;
  } else if( data < current->data ){
    insert(current->left, data, genero, duracao, idade, ano);
  } else {
    insert(current->right, data, genero, duracao, idade,ano);
  }
}

void search(node * current, string data){
  if(current == NULL){
    cout << "Filme nao encontrado" << endl;
  } else if(data == current->data){
     cout << "Nome: " << current->data << endl;
     cout << "Genero: " << current->genero << endl;
     cout << "Duracao: " << current->duracao << " mins" << endl;
     cout << "Classificacao: " << current->idade << endl;
     cout << "Ano: " << current->ano << endl;
  } else {
    if(data < current->data){
      search(current->left, data);
    } else {
      search(current->right, data);
    }
  }
}

void destruct(node * & current) {
  if (current != NULL) {
    destruct(current->left);
    destruct(current->right);
    delete(current);
    current = NULL;
  }
}

int main()
{
    node*root = NULL;

    int opcao = 15;
    string data, genero;
    int duracao, idade, ano;

    do{
        cin >> opcao;
        if(opcao == 1)
        {
            getline(cin >> ws, data);
            getline(cin >> ws, genero);
            cin >> duracao >> idade >> ano;

            insert(root, data, genero, duracao, idade, ano);
        }

        else if(opcao == 2)
        {
            string procurado;
            getline(cin >> ws, procurado);
            search(root, procurado);
        }

        else if(opcao != 0)
            cout << "Operacao invalida" << endl;

    }while(opcao !=0);

    destruct(root);

    return 0;
}
