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

void show_in_level(node * current, int&contador){
  if(current == NULL) {
    cout << "Empty Tree" << endl;
    return;
  }
  list<node*> visit_list;
  visit_list.push_back(current);
  while(!visit_list.empty()) {
    node * temp = visit_list.front();
    if (temp->left != NULL) visit_list.push_back(temp->left);
    if (temp->right != NULL) visit_list.push_back(temp->right);
    if(temp->left == NULL && temp->right == NULL)
        contador++;
    visit_list.pop_front();
  }
}

int contaFolhas(node*current)
{
    int contador = 0;
    show_in_level(current,contador);
    return contador;
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
    node*root=NULL;

    int N;
    while(cin >> N && N !=-1)
        insert(root, N);

    cout << contaFolhas(root);    

    destruct(root);
    return 0;
}
