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
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
};


void printarrayrow(int array[3][3] , int arrayrow[3]) {
	
		for (int j = 0; j < 3; j++) {
			arrayrow[j] = array[1][j];
			cout << arrayrow[j] << " ";
		}
	
	cout << endl;
}
void printarraycol(int array[3][3], int arraycol[3]) {
	for (int i = 0; i < 3; i++) {
		
			arraycol[i] = array[i][1];
		cout << arraycol[i] << " ";
	}
}



int main() {
	int array[3][3], arrayrow[3], arraycol[3];

	readarray(array);
	cout << "items arrayy" << endl;
	printarray(array);

	cout << "middle rwo item" << endl;
	printarrayrow(array, arrayrow);
	cout << "middle col item" << endl;
	printarraycol(array, arraycol);


}