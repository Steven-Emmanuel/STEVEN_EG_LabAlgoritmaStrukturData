#include <iostream>
#include <algorithm>
using namespace std;

struct Buku {
    string judul;
    string rak;
};

int cariBuku(Buku buku[], int n, string target) {
    sort(buku, buku + n, [](Buku a, Buku b) {
        return a.judul < b.judul;
    });

    int kiri = 0, kanan = n - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (buku[tengah].judul == target) return tengah;
        else if (buku[tengah].judul < target) kiri = tengah + 1;
        else kanan = tengah - 1;
    }
    return -1;
}

int main() {
    Buku daftar[] = {
        {"Algoritma Pemrograman", "Rak 1"},
        {"Struktur Data", "Rak 2"},
        {"Bahasa C++", "Rak 2"},
        {"Database", "Rak 3"},
        {"Jaringan Komputer", "Rak 4"},
        {"Sistem Operasi", "Rak 5"},
        {"Web Programming", "Rak 6"}
    };

    int jumlah = sizeof(daftar) / sizeof(daftar[0]);
    string cari;
    
    cout << "Judul buku yang dicari: ";
    getline(cin, cari);

    int hasil = cariBuku(daftar, jumlah, cari);

    if (hasil != -1)
        cout << "Ditemukan di " << daftar[hasil].rak << endl;
    else
        cout << "Buku tidak ditemukan." << endl;

    return 0;
}

