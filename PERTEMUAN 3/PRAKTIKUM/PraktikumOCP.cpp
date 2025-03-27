#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int npm;

public:
    void setNama(string n) {
        nama = n;
    }

    void setNPM(int n) {
        npm = n;
    }

    string getNama() {
        return nama;
    }

    int getNPM() {
        return npm;
    }
};

int main() {
    Mahasiswa mhs;
    string nama;
    int npm;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    mhs.setNama(nama);

    cout << "Masukkan NPM Mahasiswa: ";
    cin >> npm;
    cin.ignore(); // Membersihkan buffer
    mhs.setNPM(npm);

    cout << "Nama Mahasiswa: " << mhs.getNama() << endl;
    cout << "NPM Mahasiswa: " << mhs.getNPM() << endl;

    return 0;
}
