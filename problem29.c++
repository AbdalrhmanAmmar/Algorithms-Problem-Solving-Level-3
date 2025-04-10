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
		if (isalpha(name[i])) {
			if (isupper(name[i])) {
				CapitalCount++;
			}
			else if (islower(name[i])) {
				smallcount++;
			}
		}

	}
	Countlength = smallcount + CapitalCount;
}

int main() {
	int smallcount=0, CapitalCount=0, Length=0;
	string name = Readstring("please enter ur name here !");


		CountMyString(name, smallcount, CapitalCount, Length);

		cout << endl << "the length of string is " << Length << endl;
		cout << "the number of letter capital is " << CapitalCount << endl;
		cout << "the number of count small letter is " << smallcount << endl;


}