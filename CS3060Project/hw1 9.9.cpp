//Quinn Hackenberg
//CS 3060
//CPP hw1

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

    if (size % 2 == 0) {
        
        cout << double(*(ptrArray + (size / 2)) + *(ptrArray - 1 + (size / 2))) / 2;
    }

    else {

        cout << *(ptrArray + (size / 2));
    }

    delete[] ptrArray;
    return 0;
}