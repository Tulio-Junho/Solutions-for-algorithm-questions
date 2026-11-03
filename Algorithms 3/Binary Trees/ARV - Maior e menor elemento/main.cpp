#include<iostream>
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

void show_in_order(node * current,int&maior, int&menor) {
  if (current != NULL) {
    show_in_order(current->left, maior, menor);

    if(current->data >= maior)
        maior = current->data;
    if(current->data < menor)
        menor = current->data;

    show_in_order(current->right, maior, menor);
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
    int x;
    while(cin >> x && x != -1)
        insert(root, x);

    int maior = -999;
    int menor = 999;
    show_in_order(root, maior, menor);

    cout << menor << " e " << maior << endl;

    destruct(root);
    return 0;
}
