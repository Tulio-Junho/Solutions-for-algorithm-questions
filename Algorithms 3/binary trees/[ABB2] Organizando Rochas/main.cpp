#include<iostream>
using namespace std;

struct node{
  string data, tipo;
  struct node * left;
  struct node * right;
};

void insert(node * & current, string data, string tipo){
  if(current == NULL){
    current = new node;
    current->data = data;
    current->tipo = tipo;
    current->left = NULL;
    current->right = NULL;
  } else if( data < current->data ){
    insert(current->left, data,tipo);
  } else {
    insert(current->right, data,tipo);
  }
}

void search(node * current, string data, string tipo){
  if(current == NULL){
    cout << "Rocha nao encontrada" << endl;
  } else if(data == current->data){
     cout << "Nome: " << current->data << endl;
     cout << "Tipo: " << current->tipo << endl;
  } else {
    if(data < current->data){
      return search(current->left, data,tipo);
    } else {
      return search(current->right, data,tipo);
    }
  }
}

node * find_less_save_right(node * & current) {
  if(current->left != NULL) {
    return find_less_save_right(current->left);
  } else {
    node * copy = current;
    current = current->right;
    return copy;
  }
}

void remove(node * & current, string data, string tipo){
  if(current == NULL){
    cout <<"Rocha nao encontrada para remocao" << endl;;
  } else if(data == current->data && tipo == current->tipo){
    node * temp = current;
    if (current->right == NULL) {
      current = current->left;
    } else if (current->left == NULL) {
      current = current->right;
    } else {
      temp = find_less_save_right(current->right);
      current->data = temp->data;
      current->tipo = temp->tipo;
    }
    delete(temp);
    cout << "Rocha removida com sucesso" << endl;

  } else {
    if(data < current->data){
      remove(current->left, data, tipo);
    } else {
      remove(current->right, data, tipo);
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
    string nome, tipo;

    int opcao = -1; 

    do
    {
        cin >> opcao;

        if(opcao == 1)
        {
            getline(cin >> ws, nome);
            getline(cin >> ws, tipo);
            insert(root,nome,tipo);
        }

        else if(opcao == 2)
        {
            getline(cin >> ws, nome);
            search(root,nome,tipo);
        }

        else if(opcao == 3)
        {    
            getline(cin >> ws, nome);
            getline(cin >> ws, tipo);

            remove(root, nome,tipo);
        }

      }  while(opcao != 0);

    destruct(root);

    return 0;
}
