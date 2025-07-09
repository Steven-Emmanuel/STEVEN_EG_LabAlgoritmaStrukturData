#include <iostream>
using namespace std;

#define TABLE_SIZE 15

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(NULL) {}
};

Node* tableChaining[TABLE_SIZE];

int hashFunc(int x) {
    return x % TABLE_SIZE;
}

void initTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
        tableChaining[i] = NULL;
}

void insertChaining(int key) {
    int idx = hashFunc(key);
    Node* newNode = new Node(key);
    newNode->next = tableChaining[idx];
    tableChaining[idx] = newNode;
}

void printTable() {
    cout << "Open Hashing (Chaining) Table:\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "[" << i << "] : ";
        if (tableChaining[i] == NULL) {
            cout << "-\n";
            continue;
        }
        Node* curr = tableChaining[i];
        while (curr) {
            cout << curr->data;
            if (curr->next) cout << " -> ";
            curr = curr->next;
        }
        cout << "\n";
    }
    cout << endl;
}

void clearTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* curr = tableChaining[i];
        while (curr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
        tableChaining[i] = NULL;
    }
}

int main() {
    initTable();

    int n;
    cout << "Masukkan jumlah data yang ingin di-insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int key;
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> key;
        insertChaining(key);
    }

    printTable();

    clearTable();

    return 0;
}
