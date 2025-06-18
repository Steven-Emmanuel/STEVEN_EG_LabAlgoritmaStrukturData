#include <iostream>
using namespace std;

const int MAXNODES = 100;
int tree[MAXNODES];

void insertNode(int x) {
    int curr = 0;
    while (tree[curr] != -1) {
        if (x < tree[curr]) {
            curr = 2 * curr + 1;
        } else {
            curr = 2 * curr + 2;
        }
    }
    tree[curr] = x;
}

void inorderTraversal(int curr) {
    if (curr >= MAXNODES || tree[curr] == -1) return;

    inorderTraversal(2 * curr + 1);
    cout << tree[curr] << " ";
    inorderTraversal(2 * curr + 2);
}

int main() {

    for (int i = 0; i < MAXNODES; i++) {
        tree[i] = -1;
    }

    int x;
    char pilihan;

    do {
        cout << "Masukkan nilai pada binary tree: ";
        cin >> x;
        insertNode(x);

        cout << "Ingin memasukkan nilai lain (y/n)? ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "In-order traversal: ";
    inorderTraversal(0);
    cout << endl;

    return 0;
}

