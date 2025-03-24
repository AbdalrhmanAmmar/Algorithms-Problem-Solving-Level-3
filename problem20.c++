using namespace std;
#include <iostream>;








void printarray(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}


bool isPalindromeMatrix(int matrix[3][3]) {
	// Check if the matrix is symmetric across the main diagonal
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3 /2; j++) {
			if (matrix[i][j] != matrix[i][3 - 1 - j]) {
				return false;
			}
		}
	}
	return true;
}






int main() {
	int matrix[3][3] = {
		{1,2,1},
		{5,5,5},
		{7,3,7}
	};
	if (isPalindromeMatrix(matrix)) {
		cout << "palidrom";

	}
	else {
		cout << "not palindrom";
	}
	
}