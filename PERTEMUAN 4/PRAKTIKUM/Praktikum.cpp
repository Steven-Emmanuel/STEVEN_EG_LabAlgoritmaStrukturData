#include <iostream>
#include <string>
using namespace std;

class infobuku {
	private:
		string judul;
		string penulis;
		int tahun;
		
	public:
		infobuku() {
			judul = "unknown";
			penulis = "unknown";
			tahun = 0;
		} 
		
		void setjudul(string title) {
			judul = title;
		}
		
		void setpenulis (string author) {
			penulis = author;
		}
		
		void settahun (int year) {
			tahun = year;
		}
	void displayinfobuku() {
		cout << "Judul = " << judul << endl;
		cout << "Penulis = " << penulis << endl;
		cout << "Tahun Terbit = " << tahun << endl;
	}
};

int main ()
{
	infobuku buku1;
	infobuku buku2;
	
	buku1.setjudul ("steven");
	buku1.setpenulis("android");
	buku1.settahun (1990);
	
	buku2.setjudul("wildan");
	buku2.setpenulis("ios");
	buku2.settahun(1870);
	
	buku1.displayinfobuku();
	buku2.displayinfobuku();
	
	return 0;	
}
