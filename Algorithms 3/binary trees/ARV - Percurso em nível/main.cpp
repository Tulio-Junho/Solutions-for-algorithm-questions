#include<iostream>
#include<list>
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

void show_in_level(node * current){
  if(current == NULL) {
    cout << "Empty Tree" << endl;
    return;
  }
  list<node*> visit_list;
  visit_list.push_back(current);
  while(!visit_list.empty()) {
    node * temp = visit_list.front();
    cout << temp->data << " ";
    if (temp->left != NULL) visit_list.push_back(temp->left);
    if (temp->right != NULL) visit_list.push_back(temp->right);
    visit_list.pop_front();
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
        insert(root,x);

    show_in_level(root);

    destruct(root);
    return 0;
}
