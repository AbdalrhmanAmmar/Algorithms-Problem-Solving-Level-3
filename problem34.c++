#include <iostream>
using namespace std;
#include <string>;





string Read(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name);
	return name;
}

bool isVowel(char ch1) {
	ch1 = tolower(ch1);
	return ((ch1 == 'a') || (ch1 == 'e') || (ch1 == 'u') || (ch1 == 'i') || (ch1 == 'o'));
}

void CounterIfItsVoid(string word) {
	int counter = 0;
	for (int i = 0; i < word.length(); i++) {
		if (isVowel((word[i]))) {
			cout << word[i] << " ";
		}
	}
}

int main() {
	string name = Read("enter name");

	CounterIfItsVoid(name);

}
