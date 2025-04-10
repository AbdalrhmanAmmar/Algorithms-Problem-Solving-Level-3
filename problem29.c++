#include <string>
#include <iostream>
using namespace std;


string Readstring(string msg) {
	cout << msg << endl;
	string Name;
	getline(cin, Name);

	return Name;
}

void CountMyString(string name, int& smallcount, int& CapitalCount, int& Countlength) {
	for (int i = 0; i < name.length(); i++) {
		Countlength++;
		if (name[i] == toupper(name[i])) {
			CapitalCount++;
		}
		else {
			smallcount++;
		}
	}
}

int main() {
	int smallcount=0, CapitalCount=0, Length=0;
	string name = Readstring("please enter ur name here !");


		CountMyString(name, smallcount, CapitalCount, Length);

		cout << endl << "the length of string is " << Length << endl;
		cout << "the number of letter capital is " << CapitalCount << endl;
		cout << "the number of count small letter is " << smallcount << endl;


}