#include <iostream>
#include <numeric>
using namespace std;

int main() {

    int array[3] = {3,5,6};

    accumulate(array, &array[3], 4); // 4 + sum(array[0], array[2])

    

    return 0;
}