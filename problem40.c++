//Example Of string overloading

#include <string>
#include <iostream>
#include <vector>
using namespace std;
string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1;
}



string JoinString(string Names[], string Delim)
{
	string S1 = "";
	for (int i = 0; i <= 3; i++) {
		S1 = S1 + Names[i] + Delim;
		
}
	return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
	vector<string> vString = { "Mohammed","Faid","Ali","Maher" };

	string Names[] = {"Mohammed","Faid","Ali","Maher"};
	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");
	cout <<endl<< "Array after join" << endl;
	cout << JoinString(Names, " ");
	system("pause>0");
}