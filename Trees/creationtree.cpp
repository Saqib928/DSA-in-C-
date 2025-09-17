#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BinaryTree {
private:
    TreeNode* root;
    TreeNode* insertRecursive(TreeNode* root, int val) {
        if (root == nullptr) {
            return new TreeNode(val);
        }
        
        if (val < root->data) {
            root->left = insertRecursive(root->left, val);
        } else if (val > root->data) {
            root->right = insertRecursive(root->right, val);
        }
        
        return root;
    }

    // Helper functions for different traversals
    void inorderHelper(TreeNode* root) {
        if (root == nullptr) return;
        
        inorderHelper(root->left);
        cout << root->data << " ";
        inorderHelper(root->right);
    }

    void preorderHelper(TreeNode* root) {
        if (root == nullptr) return;
        
        cout << root->data << " ";
        preorderHelper(root->left);
        preorderHelper(root->right);
    }

    void postorderHelper(TreeNode* root) {
        if (root == nullptr) return;
        
        postorderHelper(root->left);
        postorderHelper(root->right);
        cout << root->data << " ";
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        root = insertRecursive(root, val);
    }

    void inorderTraversal() {
        cout << "Inorder Traversal: ";
        inorderHelper(root);
        cout << endl;
    }

    void preorderTraversal() {
        cout << "Preorder Traversal: ";
        preorderHelper(root);
        cout << endl;
    }

    void postorderTraversal() {
        cout << "Postorder Traversal: ";
        postorderHelper(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;
    
    // Insert some values
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Print different traversals
    tree.inorderTraversal();
    tree.preorderTraversal();
    tree.postorderTraversal();

    return 0;
}