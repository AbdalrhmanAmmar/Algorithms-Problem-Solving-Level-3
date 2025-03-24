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

void frquency(int matrix[3][3] , int &number) {
	int sum = 0;
	cout << "what number you want" << endl;
	cin >> number;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] == number) {
				sum++;
			}
		}
	}
	cout << sum;
}





int main() {
	int matrix[3][3] = {
		{9,1,12},
		{0,9,1},
		{0,9,9},
	};
	int number;

	printarray(matrix);
	frquency(matrix, number);


}