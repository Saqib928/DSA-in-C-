#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

// Function to perform in-order traversal (DFS)
void InorderTraverse(Node* node) {
    if (node == nullptr) return;
    InorderTraverse(node->left);
    cout << node->data << " ";
    InorderTraverse(node->right);
}

// Function to insert a new node in the binary search tree
Node* insertion(Node* root, int data) {
    if (root == nullptr) {
        // If the root is null, create a new node and return it
        return new Node(data);
    }

    if (data < root->data) {
        // Recursively insert in the left subtree
        root->left = insertion(root->left, data);
    } else {
        // Recursively insert in the right subtree
        root->right = insertion(root->right, data);
    }

    return root; // Return the (unchanged) root pointer
}

int main() {
    Node* root = new Node(2);  // Create root node with data 2
    root = insertion(root, 3); // Insert node with data 3
    root = insertion(root, 4); // Insert node with data 4
    root = insertion(root, 5); // Insert node with data 5

    cout << "In-order DFS: ";
    InorderTraverse(root); // Perform in-order traversal
    cout << endl;

    return 0;
}
