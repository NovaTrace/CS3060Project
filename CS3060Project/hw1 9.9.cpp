//Quinn Hackenberg
//CS 3060
//cpp hw1

void displayArray(int* arr, int size);

#include <iostream>
using namespace std;


int main() {

    int size;

    cout << "How long is the array? ";
    cin >> size;

    int* ptrArray = new int[size];

    // Creating array from input
    cout << "Please enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {

        cin >> *(ptrArray + i);
    }

    cout << "Array before sorting: ";
    displayArray(ptrArray, size);
    

    // Bubble sort
    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - i - 1; j++) {

            if (*(ptrArray + j) > *(ptrArray + j + 1)) {

                int temp = *(ptrArray + j);
                *(ptrArray + j) = *(ptrArray + j + 1);
                *(ptrArray + j + 1) = temp;
            }
        }
    }
    cout << "Array after sorting: ";
    displayArray(ptrArray, size);

    if (size % 2 == 0) {
        
        cout << "Median: " << double(*(ptrArray + (size / 2)) + *(ptrArray - 1 + (size / 2))) / 2;
    }

    else {

        cout << "Median: " << * (ptrArray + (size / 2));
    }

    delete[] ptrArray;
    return 0;
}


void displayArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {

        cout << *(arr + i);
    }
    cout << "\n";
}