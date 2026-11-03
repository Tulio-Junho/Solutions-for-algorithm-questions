#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

void insert(node *&current, int data) {
    if (current == NULL) {
        current = new node;
        current->data = data;
        current->left = NULL;
        current->right = NULL;
    } else if (data < current->data) {
        insert(current->left, data);
    } else {
        insert(current->right, data);
    }
}

void search(node *current, int data) {
    if (current == NULL) {
        cout << "Não" << endl;
    } else if (data == current->data) {
        cout << "Sim" << endl;
    } else {
        if (data < current->data) {
            search(current->left, data);
        } else {
            search(current->right, data);
        }
    }
}

void destruct(node *&current) {
    if (current != NULL) {
        destruct(current->left);
        destruct(current->right);
        delete(current);
        current = NULL;
    }
}

int main() {
    node *root = NULL;
    int N;
    cin >> N;

    string resposta;
    int x;

    for (int i = 0; i < N; i++) {
        cin >> resposta >> x;

        if (resposta == "i")
            insert(root, x);
        else if (resposta == "b")
            search(root, x);
    }

    destruct(root);

    return 0;
}
