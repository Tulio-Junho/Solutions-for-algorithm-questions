#include<iostream>
#include<iomanip>
using namespace std;

struct node{
  int data;
  struct node * left;
  struct node * right;
};

void insert(node * & current, int data){
  if(current == NULL){
    current = new node;
    current->data = data;
    current->left = NULL;
    current->right = NULL;
  } else if( data < current->data ){
    insert(current->left, data);
  } else {
    insert(current->right, data);
  }
}

void show_in_order(node * current, float&soma, int&tamanho) {
  if (current != NULL) {
    show_in_order(current->left, soma, tamanho);
    soma += current->data;
    tamanho++;
    show_in_order(current->right, soma, tamanho);
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

float media(node * current)
{
    float soma = 0;
    int tamanho = 0;
    show_in_order(current,soma,tamanho);

    if(tamanho == 0)
        return 0;

    return (soma/tamanho);
}

int main()
{
    node*root = NULL;
    float soma = 0.0;
    int tamanho = 0;

    int x;
    while(cin >> x && x != -1)
        insert(root, x);

    cout << "Media: " << fixed << setprecision(2) << media(root) << endl;

    destruct(root);
    return 0;
}
