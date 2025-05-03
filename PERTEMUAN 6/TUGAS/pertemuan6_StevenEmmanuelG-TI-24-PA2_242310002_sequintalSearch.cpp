#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;

    if (angka % 2 == 0) {
        if (angka % 4 == 0 && angka % 6 == 0) {
            cout << "Bilangan genap dan habis dibagi 4 dan 6." << endl;
        } else {
            cout << "Bilangan genap tetapi tidak habis dibagi 4 dan 6." << endl;
        }
    } else {
        if (angka % 3 == 0) {
            cout << "Bilangan ganjil dan habis dibagi 3." << endl;
        } else {
            cout << "Bilangan ganjil dan tidak habis dibagi 3." << endl;
        }
    }

    return 0;
}

