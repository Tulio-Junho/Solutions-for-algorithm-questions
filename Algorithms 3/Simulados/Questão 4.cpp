#include<iostream>
using namespace std;

struct node{
  int data;
  int PF;
  struct node * left;
  struct node * right;
};

void insert(node * & current, int data, int PF){
  if(current == NULL){
    current = new node;
    current->data = data;
    current->PF = PF;
    current->left = NULL;
    current->right = NULL;
  } else if( PF < current->PF ){
    insert(current->left, data, PF);
  } else {
    insert(current->right, data, PF);
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

void remove(node * & current, float Pmin){
  if(current == NULL)
    return;

  if(current->PF < Pmin){
    node * temp = current;
    current = current->right;
    destruct(temp->left);
    delete(temp);
    remove(current, Pmin);
  } else {
    remove(current->left, Pmin);
  }
}

void show_in_order(node * current, float omax, int& m) {
  if (current != NULL) {
    show_in_order(current->left,omax,m);

    if(current->PF <= omax){
        cout << current->data << ":" << current->PF << endl;
        m++;
    }    
    show_in_order(current->right,omax,m);
  }
}

int main(){
  node * root = NULL;

  int data, PF, opcao = -1, m=0;
  float em, p, d, a, omax, pmin;

  do
  {
      cin >> opcao;

      if(opcao == 1)
      {
        cin >> data >> em >> p >> a >> d;
        PF = (em*p*a+d+a);

        insert(root, data, PF);
      }

      else if(opcao == 2)
      {
        m=0;  
        cin >> omax;

        show_in_order(root, omax, m);

        if(m == 0)
          cout << "-" << endl;
      }

      else if(opcao == 3)
      {
        cin >> pmin;
        remove(root, pmin);      
      }

  }while(opcao != 4);

  destruct(root);

  return 0;
}
