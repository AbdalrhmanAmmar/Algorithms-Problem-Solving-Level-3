#include <iostream>
using namespace std;
#include <string>;





string Read(string msg) {
	cout << msg;
	string name;
	getline(cin, name);
	return name;
}

bool isVowel(char ch1) {
	return ((ch1 == 'a') || (ch1 == 'e') || (ch1 == 'u') || (ch1 == 'i') || (ch1 == 'o'));
}

int CounterIfItsVoid(string word) {
	int counter = 0;
	for (int i = 0; i < word.length(); i++) {
		if (isVowel(tolower(word[i]))) {
			counter += 1;
		}
	}
	return counter;
}

int main() {
	string name = Read("enter name");

	cout << CounterIfItsVoid(name);

}
