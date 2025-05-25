#include <iostream>
using namespace std;

struct Simpul {
    int data;
    Simpul* berikut;
};

class DaftarTerkait {
private:
    Simpul* kepala;
public:
    DaftarTerkait() {
        kepala = nullptr;
    }

    // Tambah data ke belakang enqueue
    void tambahBelakang(int nilai) {
        Simpul* baru = new Simpul{nilai, nullptr};
        if (!kepala) {
            kepala = baru;
        } else {
            Simpul* temp = kepala;
            while (temp->berikut) {
                temp = temp->berikut;
            }
            temp->berikut = baru;
        }
    }

    // Menampilkan data
    void tampilkan() {
        if (!kepala) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Simpul* temp = kepala;
        cout << "Data antrian (Linked List): ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->berikut;
        }
        cout << endl;
    }
};

int main() {
    int jumlah;
    cout << "Masukkan jumlah antrian: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah antrian tidak boleh nol atau negatif." << endl;
        return 0;
    }

    //kalo genap pakae array
    if (jumlah % 2 == 0) {
        int* antrian = new int[jumlah];
        cout << "== Gunakan Array ==" << endl;
        for (int i = 0; i < jumlah; i++) {
            cout << "Masukkan data ke-" << i + 1 << ": ";
            cin >> antrian[i];
        }

        cout << "Data antrian (Array): ";
        for (int i = 0; i < jumlah; i++) {
            cout << antrian[i] << " ";
        }
        cout << endl;

        delete[] antrian;
    } 
    //kalo ganjil pake linked list
    else {
        DaftarTerkait antrian;
        cout << "== Gunakan Linked List ==" << endl;
        for (int i = 0; i < jumlah; i++) {
            int nilai;
            cout << "Masukkan data ke-" << i + 1 << ": ";
            cin >> nilai;
            antrian.tambahBelakang(nilai);
        }
        antrian.tampilkan();
    }

    return 0;
}

