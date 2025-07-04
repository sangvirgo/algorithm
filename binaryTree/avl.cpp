#include <bits/stdc++.h>
using namespace std;

struct AVLNode {
    int data;
    AVLNode* left;
    AVLNode* right;
    int height;
    
    AVLNode(int val) : data(val), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
private:
    AVLNode* root;
    
    // Utility functions
    int getHeight(AVLNode* node) {
        return node ? node->height : 0;
    }
    
    int getBalance(AVLNode* node) {
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }
    
    void updateHeight(AVLNode* node) {
        if (node) {
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        }
    }
    
    // Right rotation (LL case)
    AVLNode* rightRotate(AVLNode* y) {
        AVLNode* x = y->left;
        AVLNode* T2 = x->right;
        
        // Perform rotation
        x->right = y;
        y->left = T2;
        
        // Update heights
        updateHeight(y);
        updateHeight(x);
        
        return x; // New root
    }
    
    // Left rotation (RR case)
    AVLNode* leftRotate(AVLNode* x) {
        AVLNode* y = x->right;
        AVLNode* T2 = y->left;
        
        // Perform rotation
        y->left = x;
        x->right = T2;
        
        // Update heights
        updateHeight(x);
        updateHeight(y);
        
        return y; // New root
    }
    
    // Insert helper
    AVLNode* insertHelper(AVLNode* node, int key) {
        // 1. Perform normal BST insertion
        if (!node) return new AVLNode(key);
        
        if (key < node->data)
            node->left = insertHelper(node->left, key);
        else if (key > node->data)
            node->right = insertHelper(node->right, key);
        else
            return node; // Duplicate keys not allowed
        
        // 2. Update height
        updateHeight(node);
        
        // 3. Get balance factor
        int balance = getBalance(node);
        
        // 4. If unbalanced, there are 4 cases
        
        // Left Left Case
        if (balance > 1 && key < node->left->data)
            return rightRotate(node);
        
        // Right Right Case
        if (balance < -1 && key > node->right->data)
            return leftRotate(node);
        
        // Left Right Case
        if (balance > 1 && key > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        
        // Right Left Case
        if (balance < -1 && key < node->right->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
        
        return node;
    }
    
    // Find minimum value node
    AVLNode* findMin(AVLNode* node) {
        while (node->left)
            node = node->left;
        return node;
    }
    
    // Delete helper
    AVLNode* deleteHelper(AVLNode* node, int key) {
        // 1. Perform normal BST deletion
        if (!node) return node;
        
        if (key < node->data)
            node->left = deleteHelper(node->left, key);
        else if (key > node->data)
            node->right = deleteHelper(node->right, key);
        else {
            // Node to be deleted found
            if (!node->left || !node->right) {
                AVLNode* temp = node->left ? node->left : node->right;
                
                if (!temp) {
                    temp = node;
                    node = nullptr;
                } else {
                    *node = *temp;
                }
                delete temp;
            } else {
                AVLNode* temp = findMin(node->right);
                node->data = temp->data;
                node->right = deleteHelper(node->right, temp->data);
            }
        }
        
        if (!node) return node;
        
        // 2. Update height
        updateHeight(node);
        
        // 3. Get balance factor
        int balance = getBalance(node);
        
        // 4. If unbalanced, there are 4 cases
        
        // Left Left Case
        if (balance > 1 && getBalance(node->left) >= 0)
            return rightRotate(node);
        
        // Left Right Case
        if (balance > 1 && getBalance(node->left) < 0) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        
        // Right Right Case
        if (balance < -1 && getBalance(node->right) <= 0)
            return leftRotate(node);
        
        // Right Left Case
        if (balance < -1 && getBalance(node->right) > 0) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
        
        return node;
    }
    
    // Search helper
    bool searchHelper(AVLNode* node, int key) {
        if (!node) return false;
        if (key == node->data) return true;
        if (key < node->data) return searchHelper(node->left, key);
        return searchHelper(node->right, key);
    }
    
    // Inorder traversal
    void inorderHelper(AVLNode* node, vector<int>& result) {
        if (node) {
            inorderHelper(node->left, result);
            result.push_back(node->data);
            inorderHelper(node->right, result);
        }
    }
    
    // Print tree structure
    void printHelper(AVLNode* node, int space) {
        if (!node) return;
        
        space += 10;
        printHelper(node->right, space);
        
        cout << endl;
        for (int i = 10; i < space; i++)
            cout << " ";
        cout << node->data << "(h:" << node->height << ",b:" << getBalance(node) << ")";
        
        printHelper(node->left, space);
    }
    
public:
    AVLTree() : root(nullptr) {}
    
    void insert(int key) {
        root = insertHelper(root, key);
    }
    
    void remove(int key) {
        root = deleteHelper(root, key);
    }
    
    bool search(int key) {
        return searchHelper(root, key);
    }
    
    vector<int> inorder() {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
    
    void printTree() {
        cout << "AVL Tree Structure:" << endl;
        printHelper(root, 0);
        cout << endl;
    }
    
    int getTreeHeight() {
        return getHeight(root);
    }
    
    bool isBalanced() {
        return abs(getBalance(root)) <= 1;
    }
};

// Demo và test
int main() {
    AVLTree avl;
    
    cout << "=== AVL Tree Demo ===" << endl;
    
    // Test insertion
    vector<int> values = {10, 20, 30, 40, 50, 25};
    cout << "Inserting: ";
    for (int val : values) {
        cout << val << " ";
        avl.insert(val);
    }
    cout << endl;
    
    avl.printTree();
    
    // Test search
    cout << "\nSearch Results:" << endl;
    cout << "Search 25: " << (avl.search(25) ? "Found" : "Not Found") << endl;
    cout << "Search 35: " << (avl.search(35) ? "Found" : "Not Found") << endl;
    
    // Test inorder traversal
    cout << "\nInorder Traversal: ";
    vector<int> inorder = avl.inorder();
    for (int val : inorder) {
        cout << val << " ";
    }
    cout << endl;
    
    // Test deletion
    cout << "\nDeleting 30..." << endl;
    avl.remove(30);
    avl.printTree();
    
    cout << "\nAfter deletion - Inorder: ";
    inorder = avl.inorder();
    for (int val : inorder) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "\nTree height: " << avl.getTreeHeight() << endl;
    cout << "Is balanced: " << (avl.isBalanced() ? "Yes" : "No") << endl;
    
    return 0;
}