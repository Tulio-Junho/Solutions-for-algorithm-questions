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

void show_in_order(node * current) {
  if (current != NULL) {
    show_in_order(current->left);
    cout << current->data << " ";
    show_in_order(current->right);
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
    while(cin >> x && x != 0)
    {
        insert(root, x);
    }

    int y;
    cin >> y;
    while(remove(root, y));

    show_in_order(root);

    destruct(root);
    return 0;
}
