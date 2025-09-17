#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void printKHeight(Node* root, int k) {
    if (root == nullptr) {
        return;
    }
    
    if (k == 0) {
        cout << root->data << " ";
        return;
    }
    
    printKHeight(root->left, k - 1);
    printKHeight(root->right, k - 1);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(5);
    root->right->left = new Node(6);
    root->left->right->left=new Node(8);
     root->right->left->left=new Node(9);
    int k = 3;
    cout << "Nodes at height " << k << ": ";
    printKHeight(root, k);
    return 0;
}