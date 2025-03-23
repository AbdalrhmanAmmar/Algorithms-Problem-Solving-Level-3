#include <iostream>
#include <ctime> 
using namespace std;

int Random() {
    return rand() % 9 + 1;  // Generate random numbers between 1 and 9
}

void readarray(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = Random();
        }
    }
}

int printarray(int array[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
            sum += array[i][j];
        }
        cout << endl;
    }
    cout << "Sum: " << sum << endl;
    return sum;
}

bool sumarray(int array1[3][3], int array2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array1[i][j] != array2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    srand(time(0));  // Seed the random number generator

    int array[3][3], array2[3][3];

    readarray(array);
    cout << "Items in array one:" << endl;
    printarray(array);

    readarray(array2);
    cout << "Items in array two:" << endl;
    printarray(array2);

    bool areEqual = sumarray(array, array2);
    if (areEqual) {
        cout << "Two arrays are equal" << endl;
    }
    else {
        cout << "Arrays are not equal" << endl;
    }

    return 0;
}
