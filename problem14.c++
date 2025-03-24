#include <iostream>;
using namespace std;





bool  IsScalarMatrix(int matrix[3][3]) {
	int number = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			number = matrix[0][0];
			if (i == j && matrix[i][j] != number) {
				return false;
			}
			else if (i!=j && matrix[i][j] !=0) {
				return 0;

			}
		}
	}
	return true;
}







int main() {
	int matrix[3][3] = {
		{10,0,0},
		{0,10,0},
		{0,0,10}
	};

	if (IsScalarMatrix(matrix)) {
		cout << "ScalarMatrix";
	}
	else {
		cout << "not ScalarMatrix";
	}
}