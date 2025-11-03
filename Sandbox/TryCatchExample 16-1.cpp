#include <iostream>

using namespace std; 

double divide(int numerator, int denominator);

int main() {
	int num1, num2; // Holds 2 numbers
	double quotient; // Holds the quotient of the numbers

	// Get 2 numbers
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	// Divide num1 by num2 and catch any exceptions
	try
	{
		quotient = divide(num1, num2);
		cout << "The quotient is " << quotient << endl; // Skipped if error is thrown in divide function
	}
	catch (const char* exceptionString)
	{
		cout << exceptionString;
		//cerr << exceptionString << endl; // Un-buffered, shows immediately 
	}

	cout << "End of the program.\n";
	return 0;
}

double divide(int numerator, int denominator)
{
	if (denominator == 0)
		throw "ERROR: Cannot divide by zero.\n";

	return static_cast<double>(numerator) / denominator;
}