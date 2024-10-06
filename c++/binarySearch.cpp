#include <iostream>

using namespace std;

// array변수는 포인터, x는 찾을 값, n은 배열의 크기
void binarySearch(int* array, const int x, const int n) {
    int left = 0;
    int right = n - 1;
    int loopCounter = 0;

    while (left <= right) {
        if (loopCounter > n) {
            throw "too many loops";
            return;
        }
        ++loopCounter;

        int middle = (left + right) / 2;

        if (x < array[middle]) {
            right = middle - 1;
        } else if (x > array[middle]) {
            left = middle + 1;
        } else {
            cout << middle << endl;
            return;  // 값을 찾으면 바로 종료
        }
    }

    // 만약 값을 찾지 못한 경우
    cout << "Element not found" << endl;
}

int main() {
    int array[5] = {1, 3, 5, 7, 8};

    try {
        binarySearch(&array[0], 3, 5);
    } catch (const char* e) {
        cout << "Exception: " << e << endl;
    }

    return 0;
}