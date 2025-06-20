#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlahKota = 4;
    char namaKota[] = {'a', 'b', 'c', 'd'};

    int biaya[4][4] = {
        {0, 4, 1, 3},
        {4, 0, 2, 1},
        {1, 2, 0, 5},
        {3, 1, 5, 0}
    };

    int jarak[4];
    bool sudah[4];
    int sebelumnya[4];

    for(int i = 0; i < jumlahKota; i++) {
        jarak[i] = -1;
        sudah[i] = false;
        sebelumnya[i] = -1;
    }

    int awal = 0; // 'a'
    jarak[awal] = 0;

    for(int i = 0; i < jumlahKota; i++) {
        int palingDekat = -1;
        for(int j = 0; j < jumlahKota; j++) {
            if(!sudah[j] && jarak[j] != -1 && (palingDekat == -1 || jarak[j] < jarak[palingDekat])) {
                palingDekat = j;
            }
        }

        if (palingDekat == -1) break;

        sudah[palingDekat] = true;

        for(int k = 0; k < jumlahKota; k++) {
            if(biaya[palingDekat][k] > 0) {
                int jarakBaru = jarak[palingDekat] + biaya[palingDekat][k];
                if(jarak[k] == -1 || jarakBaru < jarak[k]) {
                    jarak[k] = jarakBaru;
                    sebelumnya[k] = palingDekat;
                }
            }
        }
    }

    int tujuan = 3; // 'd'
    vector<char> lintasan;
    int temp = tujuan;
    while(temp != -1) {
        lintasan.push_back(namaKota[temp]);
        temp = sebelumnya[temp];
    }

    cout << "Jalur terpendek dari " << namaKota[awal] << " ke " << namaKota[tujuan] << ":\n";
    for(int i = lintasan.size() - 1; i >= 0; i--) {
        cout << lintasan[i];
        if(i != 0) cout << " -> ";
    }

    cout << "\nTotal biaya: " << jarak[tujuan] << endl;

    return 0;
}

