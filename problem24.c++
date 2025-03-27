using namespace std;
#include <iostream>;
#include <string>;


string ReadString(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name); // ✅ يستخدم getline لقراءة الجملة كاملة
	return name;
}


string ReadStringletter() {
	string s1 = ReadString("enter your string please");

	bool isFirstleeter = true;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != ' ' && isFirstleeter) {
			s1[i] = toupper(s1[i]);
		}
		isFirstleeter = (s1[i] == ' ' ? true : false);
	}
	return s1;
}

int main() {
	string s1 = ReadStringletter();

	cout << s1;
}