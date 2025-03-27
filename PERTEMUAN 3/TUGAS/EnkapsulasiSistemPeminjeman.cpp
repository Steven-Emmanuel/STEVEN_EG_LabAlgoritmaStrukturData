#include <iostream>
#include <cmath> // Untuk fungsi sqrt
using namespace std;

// Class untuk Persegi Panjang
class PersegiPanjang {
private:
    double panjang;
    double lebar;

public:

    void setPanjang(double p) {
        panjang = p;
    }


    void setLebar(double l) {
        lebar = l;
    }


    double getPanjang() {
        return panjang;
    }


    double getLebar() {
        return lebar;
    }


    double hitungLuas() {
        return panjang * lebar;
    }


    double hitungKeliling() {
        return 2 * (panjang + lebar);
    }
};

// Class untuk Segitiga
class Segitiga {
private:
    double alas;
    double tinggi;

public:

    void setAlas(double a) {
        alas = a;
    }


    void setTinggi(double t) {
        tinggi = t;
    }


    double getAlas() {
        return alas;
    }


    double getTinggi() {
        return tinggi;
    }

 
    double hitungLuas() {
        return (alas * tinggi) / 2;
    }


    double hitungKeliling() {
        double sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));
        return alas + tinggi + sisiMiring;
    }
};

int main() {
    // Membuat objek Persegi Panjang
    PersegiPanjang pp;
    pp.setPanjang(5);
    pp.setLebar(10);

    cout << "Persegi Panjang:" << endl;
    cout << "Panjang: " << pp.getPanjang() << endl;
    cout << "Lebar: " << pp.getLebar() << endl;
    cout << "Luas: " << pp.hitungLuas() << endl;
    cout << "Keliling: " << pp.hitungKeliling() << endl;
    cout << endl;

    // Membuat objek Segitiga
    Segitiga segitiga;
    segitiga.setAlas(3);
    segitiga.setTinggi(4);

    cout << "Segitiga:" << endl;
    cout << "Alas: " << segitiga.getAlas() << endl;
    cout << "Tinggi: " << segitiga.getTinggi() << endl;
    cout << "Luas: " << segitiga.hitungLuas() << endl;
    cout << "Keliling: " << segitiga.hitungKeliling() << endl;

    return 0;
}
