using namespace std;
#include <iostream>;
#include <ctime>;




int Randomnumber() {
	return rand() % (10 - 1) + 1;
}



void readarray(int arr1[3][3]) {
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			arr1[i][j] = Randomnumber();
	
		}
	}
}


void printarray(int arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
}

void resultarray(int array1[3][3], int array2[3][3], int result[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = array1[i][j] * array2[i][j];

			cout << result[i][j] << " ";
		}
		cout << endl;

	}
}


int main() {
	int arr1[3][3], arr2[3][3], result[3][3];
	readarray(arr1);
	readarray(arr2);

	cout << "item of first array" << endl;
	printarray(arr1);
	cout << "item of second array" << endl;
	printarray(arr2);
	cout << "result array" << endl;
	resultarray(arr1, arr2, result);


}