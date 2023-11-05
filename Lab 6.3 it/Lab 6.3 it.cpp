#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
using namespace std;


void printArray(int* array, int size);
void generateArray(int* arr, int size, int min, int max);
int CountElements(const int* arr, int size, int count);

template <typename T>
void printArray1(T* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << array[i] << " ";
    }
    cout << endl;
}

template <typename T>
void generateArray1(T* arr, int size, int min, int max) {
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

template <typename T>
T CountElements1(const T* arr, int size, T count) {

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }

    return count;
}


int main() {
    const int arrSize = 20;
    int a[arrSize];

    generateArray(a, arrSize, -50, 50);

    cout << "Array Elements:                       ";
    printArray(a, arrSize);

    int CountNumbers = CountElements(a, 20, 0);
    cout << "Count of elements which not divide 2: " << CountNumbers << endl;

    const int arrSize1 = 20;
    int b[arrSize1];

    generateArray1(b, arrSize1, -50, 50);
    cout << "Array Elements:                       ";
    printArray1(b, arrSize1);

    int CountNumbers1 = CountElements1(a, 20, 0);
    cout << "Count of elements which not divide 2: " << CountNumbers1 << endl;
    return 0;
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << array[i] << " ";
    }
    cout << endl;
}

void generateArray(int* arr, int size, int min, int max) {
    srand(unsigned(time(NULL)));
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

int CountElements(const int* arr, int size, int count) {

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 ) {
            count++;
        }
    }

    return count;
}