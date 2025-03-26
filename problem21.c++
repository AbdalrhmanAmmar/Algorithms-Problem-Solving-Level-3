using namespace std;
#include <iostream>;


void fabio(int number) {
	int temp = 0;
	int prev1 = 1;
	int prev2 = 0;
	for (int i = 0; i <= number; i++) {
		if (i == 0) {
			cout << prev2 << "";
		}
		else if (i == 1) {
			cout << prev1 << " ";
		}
		else {
			temp = prev1 + prev2;
			prev2 = prev1;
			prev1 = temp;
			cout << prev1 << " ";
		}
	}
}




int main() {
	
	fabio(10);
}