using namespace std;
#include <iostream>;









void printMatrix(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

bool isNumberInMatrix(int matrix[3][3], int number) {
	

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] == number) {
				return true;
			}

		}
	}
	return false;


}



void commonArray(int matrix1[3][3], int matrix2[3][3]) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int number = matrix1[i][j];
			if (isNumberInMatrix(matrix2, number)) {
				cout << number << "  ";
			}
		}
}

}

int main() {
	int matrix1[3][3] = {
		{77,5,12},
		{22,20,1},
		{1,0,9}
	};
	int matrix2[3][3] = {
		{5,80,90},
		{22,77,1},
		{10,8,35}
	};

	cout << "item of matrix one" << endl;
	printMatrix(matrix1);
	cout << endl << "item of matrix 2" << endl;
	printMatrix(matrix2);
	cout << "commom number in array" << endl;
	commonArray(matrix1, matrix2);

}