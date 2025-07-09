#include <iostream>
#define TABLE_SIZE 15

using namespace std;

int tableQuadratic[TABLE_SIZE];

int hashFunc(int x) { return x % TABLE_SIZE; }

void initTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
        tableQuadratic[i] = -1;
}

void insertQuadratic(int key) {
    int idx = hashFunc(key);
    int i = 0;
    while (tableQuadratic[(idx + i * i) % TABLE_SIZE] != -1 && i < TABLE_SIZE) {
        i++;
    }
    if (i == TABLE_SIZE) {
        cout << "Quadratic Probing: Table penuh, tidak bisa insert " << key << endl;
        return;
    }
    tableQuadratic[(idx + i * i) % TABLE_SIZE] = key;
}

void printTable() {
    cout << "Quadratic Probing Table:\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (tableQuadratic[i] == -1)
            cout << "[" << i << "] : -\n";
        else
            cout << "[" << i << "] : " << tableQuadratic[i] << "\n";
    }
    cout << endl;
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
        insertQuadratic(key);
    }

    printTable();

    return 0;
}
