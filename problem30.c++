#include <string>
#include <iostream>
using namespace std;

string word(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name);

	return name;
}

int CharInString(string word, char s1) {
	int counter = 0;
	s1 = tolower(s1); 

	for (int i = 0; i < word.length(); i++) {
		if (tolower(word[i]) == s1) {
			counter += 1;
		}
	}
	return counter;
}
int main() {
	string name = word("enter ur string");
	char s1;
	cout << "enter charchter";
	cin >> s1;

	cout<<CharInString(name, s1);



}