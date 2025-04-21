#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Kontak {
private:
    string nama;
    string nomor;
public:
    Kontak(string n, string no) : nama(n), nomor(no) {
        cout << "Kontak " << nama << " ditambahkan" << endl;
    }
    
    ~Kontak() {
        // Destructor kosong
    }
    
    void tampilkan() {
        cout << "Nama: " << nama << "\tNomor: " << nomor << endl;
    }
};

int main() {
    vector<Kontak> daftarKontak;
    
    daftarKontak.push_back(Kontak("yanti", "77777402219"));
    daftarKontak.push_back(Kontak("yanto", "75588736429"));
    daftarKontak.push_back(Kontak("yegi", "75588736429")); 
    daftarKontak.push_back(Kontak("geb", "123456789"));
    daftarKontak.push_back(Kontak("ang", "987654321"));
    daftarKontak.push_back(Kontak("ppp", "456123789"));
    daftarKontak.push_back(Kontak("eded", "789456123"));
    daftarKontak.push_back(Kontak("pika", "321654987"));
    daftarKontak.push_back(Kontak("loyo", "654987321"));
    daftarKontak.push_back(Kontak("poyo", "147258369"));

    // Menampilkan daftar kontak
    cout << "\nDaftar Kontak:\n";
    for(int i = 0; i < daftarKontak.size(); i++) {
        cout << i+1 << ". ";
        daftarKontak[i].tampilkan();
    }

    cout << "\nTekan enter untuk keluar...";
    cin.ignore();
    return 0;
}
