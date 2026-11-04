#include<iostream>
using namespace std;

struct node{
  int data;
  float PF;
  struct node * left;
  struct node * right;
};

void insert(node * & current, int data, float PF){
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

void show_in_order(node * current) {
  if (current != NULL) {
    show_in_order(current->left);
    cout << current->data << ":" << (int)current->PF << endl;
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

int main(){
  node * root = NULL;

  int T, data = 0;
  float PF, em, p, d, a;
  cin >> T;

  for(int i = 0; i < T; i++)
  {
      cin >> em >> p >> a >> d;
      PF = (em*p*a+d+a);

      insert(root, data, PF);
      data++;
  }

  show_in_order(root);

  destruct(root);

  return 0;
}
