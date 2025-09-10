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

	// Finding Mean
	int mean = -1;
	int maxCounter = 1;
	for (int i = 0; i < size; i++) {

		int counter = 1;
		for (int j = i + 1; j < size; j++) {

			if (*(ptrArray + i) == *(ptrArray + j)) {

				counter++;
			}
		}

		if (maxCounter < counter) {

			maxCounter = counter;
			mean = *(ptrArray + i);
		}
	}

	cout << mean;

	return 0;
}