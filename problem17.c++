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

bool isNumberInMatrix(int matrix[3][3],int &number ) {
	cout << "entert number to check" << endl;
	cin >> number;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] == number) {
				return true;
			}
	
		}
	}
	return false;

	
}





int main() {
	int matrix[3][3] = {
		{9,1,12},
		{0,0,1},
		{0,0,0},
	};
	int number;

	printarray(matrix);
	if (isNumberInMatrix(matrix, number)) {
		cout << "Yes: Found Number";
	}
	else {
		cout << "No: Dont found Number";
	}


}