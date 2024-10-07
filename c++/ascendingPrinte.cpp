#include <iostream>
using namespace std;

void ascendingPrint(int x, int y, int z) {
    // 3개의 정수를 배열로 저장
    int array[3] = {x, y, z};

    // 버블 정렬을 사용하여 오름차순으로 정렬
    for (int i = 0; i < 3 - 1; ++i) {        // 3개의 원소에 대해 2번 비교
        for (int j = 0; j < 3 - i - 1; ++j) { // 이미 정렬된 마지막 항목은 제외
            if (array[j] > array[j + 1]) {    // 앞 항목이 뒤 항목보다 크면 교체
                swap(array[j], array[j + 1]); // swap 함수로 값 교체
            }
        }
    }

    // 정렬된 배열 출력
    for (int i = 0; i < 3; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    ascendingPrint(3, 1, 2);  // 예: 1 2 3 출력
    ascendingPrint(9, 7, 8);  // 예: 7 8 9 출력
    ascendingPrint(5, 5, 2);  // 예: 2 5 5 출력

    return 0;
}