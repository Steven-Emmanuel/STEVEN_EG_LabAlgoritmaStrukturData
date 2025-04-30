#include <iostream>
using namespace std;

class Hitung {
private:
    float a, b;  // variabel hanya bisa diakses lewat setter dan getter

public:
    // Setter untuk nilai pertama
    void setNo1(float num1) {
        a = num1;
    }

    // Setter untuk nilai kedua
    void setNo2(float num2) {
        b = num2;
    }

    // Fungsi operasi
    float tambah() {
        return a + b;
    }

    float kurang() {
        return a - b;
    }

    float kali() {
        return a * b;
    }

    float bagi() {
        if (b == 0) {
            cout << "ERROR! Pembagian dengan nol tidak bisa.\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    float no1, no2;
    Hitung h;

    cout << "Masukkan angka pertama: ";
    cin >> no1;
    h.setNo1(no1);  // pakai setter

    cout << "Masukkan angka kedua: ";
    cin >> no2;
    h.setNo2(no2);  // pakai setter

    cout << "\nHasil penambahan = " << h.tambah();
    cout << "\nHasil pengurangan = " << h.kurang();
    cout << "\nHasil perkalian = " << h.kali();
    cout << "\nHasil pembagian = " << h.bagi();

    return 0;
}

