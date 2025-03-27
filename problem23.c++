using namespace std;
#include <iostream>;
#include <string>;


string ReadString(string msg) {
	cout << msg << endl;
	string name;
	getline(cin, name); // ✅ يستخدم getline لقراءة الجملة كاملة
	return name;
}


void ReadStringletter() {
	string s1 = ReadString("enter your string please");

	bool isFirstleeter = true;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != ' ' && isFirstleeter) {
			cout << s1[i] << endl;
		}
		isFirstleeter = (s1[i] == ' ' ? true : false);
	}
}

int main() {
	ReadStringletter();
}