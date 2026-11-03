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

void show_in_order(node * current) {
  if (current != NULL) {
    show_in_order(current->right);  
    cout << current->data << " ";
    show_in_order(current->left);
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

    show_in_order(root);

    destruct(root);
    return 0;
}
