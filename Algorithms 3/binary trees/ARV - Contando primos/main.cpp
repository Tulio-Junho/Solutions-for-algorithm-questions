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

void destruct(node * & current) {
  if (current != NULL) {
    destruct(current->left);
    destruct(current->right);
    delete(current);
    current = NULL;
  }
}

int contaPrimos(node*current)
{
    int primo = 1;

    if(current == NULL)
        return 0;

    if(current->data < 2)
        primo = 0;    

    for(int i = 2; i < current->data; i++)
    {
        if(current->data % i == 0)
            primo=0;
    }

    primo +=contaPrimos(current->left);
    primo +=contaPrimos(current->right);

    return primo;
}

int main()
{
    node*root = NULL;

    int x; 
    while(cin >> x && x != -1)
        insert(root,x);

    cout << contaPrimos(root) << " numeros primos" << endl;

    destruct(root);
    return 0;
}
