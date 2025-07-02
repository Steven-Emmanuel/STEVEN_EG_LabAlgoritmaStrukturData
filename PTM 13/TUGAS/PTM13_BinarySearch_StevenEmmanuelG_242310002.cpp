#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int cari) {
    int kiri = 0;
    int kanan = n - 1;
    int tengah;

    while (kiri <= kanan) {
        tengah = (kiri + kanan) / 2;

        if (data[tengah] == cari) {
            return tengah;
        } else if (data[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    return -1;
}

int main() {
    int data[7] = {11, 22, 33, 44, 55, 66, 77};
    int n = 7;
    int cari;
    int hasil;

    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    hasil = binarySearch(data, n, cari);

    if (hasil != -1) {
        cout << "Angka ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Angka tidak ditemukan." << endl;
    }

    return 0;
}

