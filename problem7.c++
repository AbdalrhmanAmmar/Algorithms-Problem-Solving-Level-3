using namespace std;
#include <iostream>;



void readarray(int array[3][3]) {
	int counter = 0;
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			counter++;
			array[i][j] = counter;
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
}



void changeRowToCol(int array[3][3], int newarray[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			newarray[j][i] = array[i][j];  
		}
	}
}

void printNew(int newarray[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << newarray[i][j] << " ";
		}
		cout << endl;
	}
}



int main() {
	int array[3][3];
	int newarray[3][3];
	readarray(array);
	cout << "item of first array" << endl;
	printarray(array);
	changeRowToCol(array, newarray);
	cout << "iten of new array col" << endl;
	printNew(newarray);

}