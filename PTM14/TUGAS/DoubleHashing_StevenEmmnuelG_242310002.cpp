#include <iostream>
#define TABLE_SIZE 15

using namespace std;

int tableDoubleHash[TABLE_SIZE];

int hashFunc(int x) { return x % TABLE_SIZE; }
int hashFunc2(int x) { return 7 - (x % 7); }

void initTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
        tableDoubleHash[i] = -1;
}

void insertDoubleHash(int key) {
    int idx = hashFunc(key);
    int step = hashFunc2(key);
    int i = 0;
    while (tableDoubleHash[(idx + i * step) % TABLE_SIZE] != -1 && i < TABLE_SIZE) {
        i++;
    }
    if (i == TABLE_SIZE) {
        cout << "Double Hashing: Table penuh, tidak bisa insert " << key << endl;
        return;
    }
    tableDoubleHash[(idx + i * step) % TABLE_SIZE] = key;
}

void printTable() {
    cout << "Double Hashing Table:\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (tableDoubleHash[i] == -1)
            cout << "[" << i << "] : -\n";
        else
            cout << "[" << i << "] : " << tableDoubleHash[i] << "\n";
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
        insertDoubleHash(key);
    }

    printTable();

    return 0;
}
