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



int maxORMinNumber(int matrix[3][3], int &MaxOrMin, int &number) {
	cout << "do you wanna find max or min write" << endl;
	cout << "1- max" << endl;
	cout << "2-Min" << endl;
	cout << "press number" << endl;
	cin >> MaxOrMin;

	while (MaxOrMin != 1 && MaxOrMin != 2) {
		cout << "Invalid input! Please enter 1 for Max or 2 for Min: ";
		cin >> MaxOrMin;
	}
	 number = matrix[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (MaxOrMin == 1) {
				if (number < matrix[i][j]) {
					number = matrix[i][j];
				}
			}
			else {
				if (number > matrix[i][j]) {
					number = matrix[i][j];
				}
			}
			
		}
		
	}
	return number;
}







int main() {
	int matrix[3][3] = {
		{77,5,12},
		{22,20,6},
		{14,3,9}
	};
	printarray(matrix);
	int MaxOrMin;

	int number;
	int digit = maxORMinNumber(matrix, MaxOrMin, number);
	cout << digit;
}