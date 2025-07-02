#include <iostream>
using namespace std;

int main() {
    int table[10];
    for (int i = 0; i < 10; i++) table[i] = -1;

    int n, data;
    cout << "Jumlah data: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": "; cin >> data;
        int idx = data % 10;
        int originalIdx = idx;
        bool inserted = false;

        for (int j = 0; j < 10; j++) {
            if (table[idx] == -1) {
                table[idx] = data;
                cout << "Disimpan di index " << idx << "\n";
                inserted = true;
                break;
            } else {
                idx = (idx + 1) % 10; // Cek slot berikutnya
            }
        }

        if (!inserted) {
            cout << "Hashtable penuh, data tidak dapat disimpan.\n";
        }
    }

    cout << "\nIsi Hashtable:\n";
    for (int i = 0; i < 10; i++) {
        if (table[i] == -1)
            cout << i << ": Kosong\n";
        else
            cout << i << ": " << table[i] << "\n";
    }

    return 0;
}

