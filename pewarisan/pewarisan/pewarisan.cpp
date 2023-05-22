#include <iostream>
#include <string>
using namespace std;

class orang {									//membuat class orang
public:											//akses modifier
	string nama;

	orang(string pNama) :						//constructor
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {									//destructor
		cout << "orang dihapus\n" << endl;
	}

	int jumlah(int a, int b) {					
		return a + b;
	}
};

class pelajar :public orang {						//membuat class pelajar
public:												//akses modifier
	string sekolah;

	pelajar(string pNama, string pSekolah) :			//constructor
		orang(pNama),
		sekolah(pSekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
	~pelajar() {										//destructor
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
	}
};

int main() {											//main program
	pelajar siswa1("andi laksono", "SMAN 1 BANTUL");
	cout << siswa1.perkenalan();
	cout << "Hasil = " << siswa1.jumlah(90, 80) << endl;

	return 0;
}