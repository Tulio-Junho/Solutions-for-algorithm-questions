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

void search(node * current, int data){
  if(current == NULL){
    cout << "Não" << endl;
  } else if(data == current->data){
     cout << "Sim" << endl;
  } else {
    if(data < current->data){
      return search(current->left, data);
    } else {
      return search(current->right, data);
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

bool remove(node * & current, int data){
  if(current == NULL){
    return false;
  } else if(data == current->data){
    node * temp = current;
    if (current->right == NULL) {
      current = current->left;
    } else if (current->left == NULL) {
      current = current->right;
    } else {
      temp = find_less_save_right(current->right);
      current->data = temp->data;
    }
    delete(temp);
    return true;
  } else {
    if(data < current->data){
      return remove(current->left, data);
    } else {
      return remove(current->right, data);
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

    int N, y;
    string opcao;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> opcao >> y;

        if(opcao == "i") 
            insert(root, y);

        else if(opcao == "r")
            remove(root, y);

        else if(opcao == "b")
            search(root, y);
    }

    destruct(root);
    return 0;
}
