#include <iostream>
using namespace std;

int divZero(int a, int b, int c) {
    if (a < 0 && b < 0 && c < 0) {
        throw 1;
    } else if (a == 0 && b ==0 && c ==0) {
        throw 2;
    }
    return a + b * c + b / c;
}

int sumArray(int* arr, int size) {

    if (arr == nullptr) {
        throw "Array is null";
    }

    int summation = 0;
    
    for (int i=0; i<size; i++) {
        summation += arr[i];
    }

    return summation;
}

int main() {

    // 연습문제 2
    int arraySize;
    
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int* newArray = new int[arraySize];
    for (int i = 0; i < arraySize && i < 5; ++i) {
        newArray[i] = i + 1;
    };

    delete[] newArray;

    try {
        int summation = sumArray(newArray, arraySize);
        cout << "Summation: " << summation << endl;
    } catch (char* e) {
        cout << "Exception: " << e << endl;
        return 1;
    }

    // 연습문제 1
    int a,b,c;
    cin >> a >> b >> c;

    try {
        cout << divZero(a,b,c) << endl;
    } catch (char* e) {
        cout << "Exception: " << e << endl;
        return 1;
    } catch (int e) {
        cout << "Exception with Integer: " << e << endl;
        return 1;
    }
    return 0;
}