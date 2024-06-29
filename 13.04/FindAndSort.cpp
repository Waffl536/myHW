#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void sortArray(int arr[], int size, int order = 1) {
    if (order == 1) {
        std::sort(arr, arr + size, std::greater<int>());
    } else {
        std::sort(arr, arr + size);
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    
    std::srand(std::time(0));

    for(int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 41 - 20;
    }

    std::cout << "1.\nArray: ";
    for(int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    sortArray(arr, SIZE, 1);
    std::cout << "Sorted (bigger to smaller): ";
    for(int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    sortArray(arr, SIZE, 0); 
    std::cout << "Sorted (smaller to bigger): ";
    for(int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    //2

    int arr2[10];
    
    std::srand(std::time(0));

    for (int i = 0; i < SIZE; ++i) {
        arr2[i] = std::rand() % 41 - 20; 
    }

    std::cout << "\n2.\nArray: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    int leftNegative = -1, rightNegative = -1;
    for (int i = 0; i < SIZE; ++i) {
        if (arr2[i] < 0) {
            if (leftNegative == -1) {
                leftNegative = i;
            }
            rightNegative = i;
        }
    }

    int arr3[rightNegative-leftNegative-1];
    for(int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 41 - 20;
    }

    std::cout << "Sorted: ";
    
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
