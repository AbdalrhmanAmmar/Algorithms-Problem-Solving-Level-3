#include <iostream>
using namespace std;
#include <ctime> 


int Random() {
	return rand() % (10 - 1) + 1;

}

void readarray(int array[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][j] = Random();
		}
	}
}

void printarray(int array[3][3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
			sum += array[i][j];
		}
		cout << endl;
	
	}
	cout << sum;
	
};




int main() {
	int array[3][3], int array2[3][3];

	readarray(array);
	cout << "items array one " << endl;
	printarray(array);
    




}