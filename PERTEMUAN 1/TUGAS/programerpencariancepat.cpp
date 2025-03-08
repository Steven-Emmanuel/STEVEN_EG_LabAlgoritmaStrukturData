#include <iostream>
#include <string>

using namespace std;

void selectionSort(string books[], int n) {
    int minIndex;
    string temp;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (books[j] < books[minIndex]) {
                minIndex = j;
            }
        }
        temp = books[minIndex];
        books[minIndex] = books[i];
        books[i] = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore();

    string books[n];

    cout << "Masukkan judul buku:\n";
    for (int i = 0; i < n; i++) {
        cout << "Buku ke-" << i + 1 << ": ";
        getline(cin, books[i]);
    }

    // Panggil fungsi sorting
    selectionSort(books, n);

    cout << "\nDaftar Buku Setelah Diurutkan (Ascending):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << books[i] << endl;
    }

    return 0;
}
