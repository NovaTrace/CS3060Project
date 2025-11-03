#include <iostream>
#include <new> // for std::bad_alloc
using namespace std;

int main() {
	try {
		// Try to allocate a huge block of memory
		int* largeArray = new int[100000000000];
		cout << "Memory allocation successful!" << endl;
		delete[] largeArray;
	}
	catch (bad_alloc& e) {
		cerr << "Memory allocation failed: " << e.what() << endl;
	}

	cout << "Program continues safely..." << endl;
	return 0;
}

//catch(...){} // Catch-all handler