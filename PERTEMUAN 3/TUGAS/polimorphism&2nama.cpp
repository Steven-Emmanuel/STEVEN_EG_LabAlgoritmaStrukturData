#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:

    Mahasiswa(string s, string n, int u, string j, string f) {
        status = s;
        nama = n;
        umur = u;
        jurusan = j;
        fakultas = f;
    }

    virtual void displayInfo() {
        cout << "Status: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }
};

class Alumni : public Mahasiswa {
public:
    Alumni(string n, int u, string j, string f) : Mahasiswa("Alumni", n, u, j, f) {}
};


class MahasiswaAktif : public Mahasiswa {
public:
    MahasiswaAktif(string n, int u, string j, string f) : Mahasiswa("Mahasiswa Aktif", n, u, j, f) {}
};

int main() {

    Mahasiswa *m1 = new Alumni("plastik", 99, "Teknik Drag", "FTE");
    Mahasiswa *m2 = new MahasiswaAktif("tepung", 99, "Teknik Superman", "FEB");

    cout << "Informasi Mahasiswa 1:" << endl;
    m1->displayInfo();
    cout << endl;

    cout << "Informasi Mahasiswa 2:" << endl;
    m2->displayInfo();

    delete m1;
    delete m2;

    return 0;
}
