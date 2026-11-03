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

node * search(node * current, int data){
  if(current == NULL){
    return NULL;
  } else if(data == current->data){
     return current;
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

int pre_ordem(node * current, int x, int&tamanho) {
  
  if (current != NULL) {
    tamanho++;  
    
    if(current->data == x)
        return tamanho;
    
    int resultado = pre_ordem(current->left,x,tamanho);
    if(resultado != -1)
        return resultado;
        
    return pre_ordem(current->right,x,tamanho);
  }
  
  return -1;
}

int in_ordem(node * current, int x, int&tamanho) {
  if (current != NULL) {
    
      
    int resultado = in_ordem(current->left,x,tamanho);
    
    if(resultado != -1)
        return resultado;
    
    tamanho++;
    
    if(current->data == x)
        return tamanho;
        
    return in_ordem(current->right,x,tamanho);
  }
  return -1;
}

int pos_ordem(node * current, int x, int&tamanho) {
  if (current != NULL) {
    int resultado = pos_ordem(current->left,x,tamanho);
    
    if(resultado != -1)
        return resultado;
    
    resultado = pos_ordem(current->right,x,tamanho);
    
    if(resultado != -1)
        return resultado;
        
    tamanho++;
    
    if(current->data == x)
        return tamanho;
        
  }
  return -1;
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
    int tamanho1 = 0;
    int tamanho2 = 0;
    int tamanho3 = 0;
    
    int x;
    while(cin >> x && x!= -1)
        insert(root,x);
    
    int y;
    cin >> y;
    int res1 = pre_ordem(root,y,tamanho1);
    int res2 = in_ordem(root,y,tamanho2);
    int res3 = pos_ordem(root,y,tamanho3);
    
    if(res1 < res2 && res1 < res3)
        cout << "Pre" << endl;
        
    else if(res2 < res1 && res2 < res3)
        cout << "Em" << endl;
    
    else if(res3 < res2 && res3 < res1)
        cout << "Pos" << endl;
    
    destruct(root);
    return 0;
}







