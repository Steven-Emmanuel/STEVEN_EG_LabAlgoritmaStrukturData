#include <iostream>
#define TABLE_SIZE 15

using namespace std;

int tableLinear[TABLE_SIZE];

int hashFunc(int x) { return x % TABLE_SIZE; }

void initTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
        tableLinear[i] = -1;
}

void insertLinear(int key) {
    int idx = hashFunc(key);
    int i = 0;
    while (tableLinear[(idx + i) % TABLE_SIZE] != -1 && i < TABLE_SIZE) {
        i++;
    }
    if (i == TABLE_SIZE) {
        cout << "Linear Probing: Table penuh, tidak bisa insert " << key << endl;
        return;
    }
    tableLinear[(idx + i) % TABLE_SIZE] = key;
}

void printTable() {
    cout << "Linear Probing Table:\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (tableLinear[i] == -1)
            cout << "[" << i << "] : -\n";
        else
            cout << "[" << i << "] : " << tableLinear[i] << "\n";
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
        insertLinear(key);
    }

    printTable();

    return 0;
}
