#include <iostream>
#include <cstring>
using namespace std;

const int N = 100;
const int INF = 1e9;
int dist[N][N];

void floydWarshall(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah node pada graph: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dist[i][j] = (i == j) ? 0 : INF;

    cout << "Masukkan jarak antar node (gunakan -1 jika tidak ada koneksi):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int w;
            cin >> w;
            if (w != -1)
                dist[i][j] = w;
        }
    }

    floydWarshall(n);

    cout << "Hasil jalur terpendek antar node:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

