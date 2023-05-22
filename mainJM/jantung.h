#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class jantung {		//class jantung						
public:										//akses modifier
	jantung() {								//constructor
		cout << "jantung dihidupkan\n";
	}
	~jantung() {							//destructor
		cout << "jantung dimatikan\n";
	};
#endif
