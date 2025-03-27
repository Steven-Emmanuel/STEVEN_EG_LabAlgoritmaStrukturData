#include <iostream>
#include <string>
using namespace std;

class Silsilah {
protected:
    string orangTua = "Albert Wijaya dan Jenny Lim";
    string anak = "Agatha Wijaya dan Jonathan Wijaya";

public:
    string cekSilsilah() {
        return "Ayah bernama " + orangTua.substr(0, orangTua.find(" ")) +
               " dan Ibu bernama " + orangTua.substr(orangTua.find(" ") + 4);
    }
};

class Cucu : public Silsilah {
protected:
    string cucu = "Milbert Tan dan Rayanza Wijaya";

public:
    string cekAnak() {
        return "Anak pertama keluarga Wijaya adalah " + anak.substr(0, anak.find(" ")) +
               " dan anak kedua dari keluarga Wijaya adalah " + anak.substr(anak.find(" ") + 4);
    }

    string cekCucu() {
        return "Cucu pertama bernama " + cucu.substr(0, cucu.find(" ")) +
               " dan cucu kedua bernama " + cucu.substr(cucu.find(" ") + 4);
    }
};

class Anak : public Cucu {
public:
    string lihatSilsilahnya() {
        return "Silsilah Keluarga Wijaya";
    }
};

int main() {
    Anak silsilahWijaya;

    cout << silsilahWijaya.lihatSilsilahnya() << endl;
    cout << silsilahWijaya.cekSilsilah() << endl;
    cout << silsilahWijaya.cekAnak() << endl;
    cout << silsilahWijaya.cekCucu() << endl;

    return 0;
}
