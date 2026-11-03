#include <iostream>
#include <list>
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
        cout << "Nao encontrado" << endl;
        
    } 
    else if(data == current->data){
        cout << "Encontrado" << endl;
        
    } 
    else {
        if(data < current->data){
            search(current->left, data);
        } 
        else {
            
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
    node * root = NULL;
    int N;
    cin >> N;
    int x;
    
    for(int i = 0; i < N; i++)
    {
        cin >> x;
        insert(root, x);
    }
    
    int procurado;
    
    cin >> procurado;
    
    search(root,procurado);
    
    destruct(root);
    
    return 0;
}
