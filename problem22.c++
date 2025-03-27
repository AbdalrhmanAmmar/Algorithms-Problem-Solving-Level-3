using namespace std;
#include <iostream>;







void Fabionacci(int Number, int prev1, int prev2) {
	int febNumber = 0;

	if (Number > 0) {
		febNumber = prev2 + prev1;
		prev2 = prev1;
		prev1 = febNumber;
		cout << febNumber << " ";
		Fabionacci(Number - 1, prev1, prev2);
	}
}











int main() {
	Fabionacci(10, 0, 1);
}