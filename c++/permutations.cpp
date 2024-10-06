#include <iostream>
#include <cmath>
using namespace std;

void permutations(int n) {
    // n의 크기를 가진 array 만들기
    int* combinations = new int[n];

    // 2의 n승 동안 반복
    for (int i = 0; i < pow(2, n); ++i) {
        // i를 이진수로 변환하여 배열에 저장
        for (int j = 0; j < n; ++j) {
            combinations[j] = (i >> j) & 1;  // i의 j번째 비트를 가져옴
        }

        // 배열 값 출력
        for (int j = n - 1; j >= 0; --j) {  // 순서를 맞추기 위해 역순으로 출력
            cout << combinations[j] << " ";
        }
        cout << endl;
    }

    delete[] combinations;  // 메모리 해제
}

int main() {
    permutations(3);  // 예: n = 3인 경우 모든 조합 출력
    return 0;
}