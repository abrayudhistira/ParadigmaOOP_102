#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {					//class manusia
public:							//akses modifier
	string name;
	jantung varJantung;

	manusia(string pName)				//constructor
		: name(pName) {
		cout << name << " hidup\n";
	}
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif
