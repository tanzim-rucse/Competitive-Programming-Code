#include <bits/stdc++.h>
using namespace std;

struct Node {
    int info;
    Node *left, *right;
};


Node* insertBST(Node* root, int value) {
    if (root == NULL) {
        root = new Node{value, NULL, NULL};
        return root;
    }
    if (value < root->info)
        root->left = insertBST(root->left, value);
    else
        root->right = insertBST(root->right, value);

    return root;
}


void PREORDER(Node* ROOT) {
    Node* STACK[100];
    int TOP;
    Node* PTR;

    STACK[0] = NULL;      // Initially push NULL
    TOP = 1;
    STACK[TOP] = NULL;

    PTR = ROOT;

    while (PTR != NULL) {

        cout << PTR->info << " ";  // PROCESS Root

        if (PTR->right != NULL) {  // If right child exists
            TOP = TOP + 1;
            STACK[TOP] = PTR->right;
        }

        if (PTR->left != NULL) {   // If left child exists
            PTR = PTR->left;
        }
        else {
            PTR = STACK[TOP];      // Pop from stack
            TOP = TOP - 1;
        }
    }
}

int main() {
    
    int arr[9]={8,3,10,1,6,14,4,7,13};
    
    Node* ROOT = NULL;

    
    for (int i = 0; i < 9; i++) {
        ROOT = insertBST(ROOT, arr[i]);  // Insert into BST
    }

    cout << "\nPreorder Traversal : ";
    PREORDER(ROOT);
    cout << "\n";
}
