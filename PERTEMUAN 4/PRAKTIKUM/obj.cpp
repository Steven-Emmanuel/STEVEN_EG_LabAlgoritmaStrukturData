#include <iostream>
#include <string>
using namespace std;

class pelajaran { //class name
	public : //access specifier
		pelajaran () {//construktor
			cout << "ini adalah mencari materi c++ tentang constructors!";
		}
};

int main ()
{
	pelajaran obj; //membuat object dari sebuah class
	return 0;
}
