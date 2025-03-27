#include <iostream>;
using namespace std;
#include <string>;










char enterChar(string msg) {
	cout << msg << endl;
	char chr;
	cin >> chr;

		return chr;
}



char invertChar(char ch) {
	return isupper(ch) ? tolower(ch) : toupper(ch);
}


int main() {
	char chr = enterChar("enter charchter");
	chr = invertChar(chr);

	cout << chr;
}