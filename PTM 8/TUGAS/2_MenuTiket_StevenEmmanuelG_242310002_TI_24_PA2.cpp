#include <iostream>
using namespace std;

const int MAX = 3;
string queue[MAX];
int front = 0, rear = 0;

bool isEmpty() {
    return front == rear;
}

bool isFull() {
    return rear == MAX;
}

void enqueue(string data) {
    if (isFull()) {
        cout << "Queue penuh" << endl;
    } else {
        queue[rear++] = data;
        cout << "Data masuk: " << data << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong" << endl;
    } else {
        cout << "Data keluar: " << queue[front] << endl;
        for (int i = 0; i < rear - 1; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
}

void tampilkan() {
    if (isEmpty()) {
        cout << "Queue kosong" << endl;
    } else {
        cout << "Isi queue: ";
        for (int i = 0; i < rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int pilihan;
    string input;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Tampilkan\n0. Keluar\nPilih: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> input;
                enqueue(input);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                tampilkan();
                break;
        }
    } while (pilihan != 0);

    return 0;
}
