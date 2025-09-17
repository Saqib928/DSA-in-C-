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

void levelOrder(Node* root) {
    if (root == nullptr) return;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        
        for(int i = 0; i < levelSize; i++) {
            Node* current = q.front();
            q.pop();
            
            cout << current->data << " ";
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        cout << "\n";  
    }
}

void zigzagLevelOrder(Node* root) {
    if (root == nullptr) return;
    
    deque<Node*> q;
    q.push_back(root);
    bool leftToRight = true;
    
    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; i++) {
            if (leftToRight) {
                Node* current = q.front();
                q.pop_front();
                cout << current->data << " ";
                
                if (current->left) q.push_back(current->left);
                if (current->right) q.push_back(current->right);
            } else {
                Node* current = q.back();
                q.pop_back();
                cout << current->data << " ";
                
                if (current->right) q.push_front(current->right);
                if (current->left) q.push_front(current->left);
            }
        }
        cout << "\n";  // New line after each level
        leftToRight = !leftToRight;
    }
}

int main() {
    // Create a sample tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    /*
    Tree structure:
           1
         /   \
        2     3
       / \   / \
      4   5 6   7
    */
    
    cout << "Level Order Traversal: ";
    cout<<"\n";
    levelOrder(root);
    cout << "\n";
    
    cout << "Zigzag Level Order Traversal: ";
    cout<<"\n";
    zigzagLevelOrder(root);
    cout << "\n";
    
    return 0;
}