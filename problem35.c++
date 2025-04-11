#include <iostream>
using namespace std;
#include <string>;





string Read(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name);
	return name;
}


void printString(string word) {
	cout << endl;
	cout << endl;
	for (int i = 0; i < word.length(); i++) {
		if ((char)word[i] != ' ') {
			cout << word[i];
		}
		else {
			cout << endl;
		}
	}
}
int main() {
	string name = Read("enter name");

	printString(name);

}
