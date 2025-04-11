#include <iostream>
using namespace std;
#include <string>;





string Read(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name);
	return name;
}


void Countwords(string word) {
	cout << endl;
	cout << endl;
	int counter = 1;
	for (int i = 0; i < word.length(); i++) {
		if ((char)word[i] != ' ') {
		}
		else {
			counter += 1;
		}
	}
	cout << counter;
}
int main() {
	string name = Read("enter name");

	Countwords(name);

}
