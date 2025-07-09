#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

Node* insertBST(Node* root, int key) {
    if (root == NULL) {
        return new Node(key);
    }
    if (key < root->data) {
        root->left = insertBST(root->left, key);
    } else if (key > root->data) {
        root->right = insertBST(root->right, key);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void clearBST(Node* root) {
    if (root == NULL) return;
    clearBST(root->left);
    clearBST(root->right);
    delete root;
}

int main() {
    Node* root = NULL;
    int n, val;

    cout << "Masukkan jumlah node: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai node ke-" << (i+1) << ": ";
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "\nInorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    clearBST(root);
    return 0;
}
