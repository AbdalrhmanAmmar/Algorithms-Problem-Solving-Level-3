#include <iostream>;
using namespace std;





bool  checkmatrix(int matrix[3][3]) {
	int number = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j && matrix[i][j] != 1) {
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
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	if (checkmatrix(matrix)) {
		cout << "ident";
	}
	else {
		cout << "not iden";
	}
}