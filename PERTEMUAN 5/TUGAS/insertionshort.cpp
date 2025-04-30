#include <iostream>
#include <string>
using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        // Bandingkan panjang karakter, bukan alfabet
        while (j >= 0 && arr[j].length() > key.length()) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Fungsi untuk menampilkan isi array string
void tampilkanArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah nama: ";
    cin >> n;
    cin.ignore(); // Untuk membersihkan newline di buffer

    string nama[n];

    for (int i = 0; i < n; i++) {
        cout << "Nama ke-" << i + 1 << ": ";
        getline(cin, nama[i]); // Pakai getline agar bisa input nama dengan spasi
    }

    cout << "\nSebelum diurutkan:\n";
    tampilkanArray(nama, n);

    insertionSort(nama, n);

    cout << "\nSetelah diurutkan berdasarkan panjang karakter:\n";
    tampilkanArray(nama, n);

    return 0;
}

