using namespace std;

#include <iostream>;








void printarray(int matrix[3][3]  ) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

bool sparce(int matrix[3][3]) {
	int zero = 0;
	int anyNum = 0;


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] == 0) {
				zero += 1;
			}
			else {
				anyNum += 1;
			}
		}
	}
	if (zero > anyNum) {
		return true;
	}
	else {
		return false;
	}
	
}





int main() {
	int matrix[3][3] = {
		{9,1,12},
		{0,0,1},
		{0,0,0},
	};
	int number;

	printarray(matrix);
	if (sparce(matrix)) {
		cout << "sparce matrix";
	}
	else {
		cout << "not sparce matrix";
	}


}