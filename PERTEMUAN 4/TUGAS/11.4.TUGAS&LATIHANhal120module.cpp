#include <iostream>
using namespace std;

class contoh {
private:
    int nilai;
public:
    // Constructor
    contoh(int n) {
        nilai = n;
        cout << "Constructor" << endl;
    }
    
    // Destructor
    ~contoh() {
        cout << "Destructor" << endl;
    }
    
    // Fungsi untuk dapat nilai
    int getNum() {
        return nilai;
    }
};

int main() {
    // Membuat objek dari class misal dari constructor
    contoh obj(10);
    
    // menampilkan nilai yang masukan
    cout << "Nilai yang diinput: " << obj.getNum() << endl;
    
    return 0;
}
