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

int findHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    
    cout << "Height of the tree is: " << findHeight(root) << endl;
    return 0;
}