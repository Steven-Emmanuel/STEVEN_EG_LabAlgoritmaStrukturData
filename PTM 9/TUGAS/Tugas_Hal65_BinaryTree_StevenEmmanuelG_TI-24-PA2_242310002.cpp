#include <iostream>
using namespace std;

struct Node {
    int nilai;
    Node* kiri;
    Node* kanan;

    Node(int x) {
        nilai = x;
        kiri = NULL;
        kanan = NULL;
    }
};

class Pohon {
public:
    Node* akar;

    Pohon() {
        akar = NULL;
    }

    void tambah(int x) {
        akar = sisip(akar, x);
    }

    Node* sisip(Node* a, int x) {
        if (a == NULL) return new Node(x);
        if (x < a->nilai)
            a->kiri = sisip(a->kiri, x);
        else
            a->kanan = sisip(a->kanan, x);
        return a;
    }

    void preorder(Node* a) {
        if (a == NULL) return;
        cout << a->nilai << " ";
        preorder(a->kiri);
        preorder(a->kanan);
    }

    void inorder(Node* a) {
        if (a == NULL) return;
        inorder(a->kiri);
        cout << a->nilai << " ";
        inorder(a->kanan);
    }

    void postorder(Node* a) {
        if (a == NULL) return;
        postorder(a->kiri);
        postorder(a->kanan);
        cout << a->nilai << " ";
    }
};

int main() {
    Pohon p;

    int data[] = {12, 16, 20, 24, 32};
    for (int i = 0; i < 5; i++) {
        p.tambah(data[i]);
    }

    cout << "Pre-order: ";
    p.preorder(p.akar);
    cout << endl;

    cout << "In-order: ";
    p.inorder(p.akar);
    cout << endl;

    cout << "Post-order: ";
    p.postorder(p.akar);
    cout << endl;

    return 0;
}

