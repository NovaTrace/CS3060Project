//#include <iostream>
//#include<iomanip>
//using namespace std;
//
////---// Main 1 -> Temperature conversion
//int main1()
//{
//	double celsius,
//		fahrenheit;
//
//	cout<<"Enter the temperature in Celsius:";
//	cin >> celsius;
//
//	fahrenheit = ((9.0 / 5.0) * celsius) + 32;
//
//	
//	cout << fixed << showpoint << setprecision(1) << fahrenheit << "degrees Fahrenheit.\n";
//	//メモ << 'not scientific notation' << show decimal points* << precision after decimal <<
//
//	return 0;
//}
//
////----// Main 2 -> Leap year code
//
//bool IsLeapYear(int year); // Prototype for subalgorithm
//
//int main2()
//{
//	int year;
//	cout << "Enter the year:"<<endl;
//	cin >> year;
//
//
//	if (IsLeapYear(year)) {
//
//		cout<<year<<" is a leap year."<<endl;
//	}
//
//	else {
//
//		cout << year << " is not a leap year." << endl;
//	}
//
//	return 0;
//}
//
//bool IsLeapYear(int year)
//{
//
//	if (year % 4 != 0)
//		return false;
//
//	if (year % 100 != 0)
//		return true;
//
//	return true; // Is yeawr not a multiple of 400
//}
//
////---// Main 3 -> 3 number sorting code (takes 3 number inputs, outputs in ascending order seaparated by one space)
//
//int main3()
//{
//	
//	double num1, num2, num3;// Declare vars
//	double temp;
//	cout << "Enter three numbers: ";
//	cin >> num1 >> num2 >> num3;
//	cout << endl;
//
//	if (num1 > num2)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//
//	// if num1 > num2  we'll need a temp to switcharoo
//	****
//
//		// Ask for 3 number input
//		****
//
//		// Compare num1 to num2 
//		// Tell output
//
//		return 0;
//}
//
////---// Main 4 -> Telephone nubers (converts words to telephone numbers)
//
//#include <string>
//
//int main4()
//{
//	char letter;
//	int noOfLetters;
//	char response;
//
//	cout << "Enter Y/y to convert a telephone number " << "form letters to digits.\n" << "Enter any other letter to terminate the program" << endl;
//
//	cin >> response;
//
//	while (response == 'Y' || response == 'y')
//	{
//
//		cout << "Enter a telepone number using letters: ";
//		cin >> letter;
//		cout << endl;
//
//		while (noOfLetters < 7)
//		{
//			noOfLetters++;
//
//			switch (letter)
//			{
//
#include <iostream>
#include<iomanip>
using namespace std;

//---// Main 1 -> Temperature conversion
int main1()
{
	double celsius,
		fahrenheit;

	cout << "Enter the temperature in Celsius:";
	cin >> celsius;

	fahrenheit = ((9.0 / 5.0) * celsius) + 32;


	cout << fixed << showpoint << setprecision(1) << fahrenheit << "degrees Fahrenheit.\n";
	//メモ << 'not scientific notation' << show decimal points* << precision after decimal <<

	return 0;
}

//----// Main 2 -> Leap year code

bool IsLeapYear(int year); // Prototype for subalgorithm

int main2()
{
	int year;
	cout << "Enter the year:" << endl;
	cin >> year;


	if (IsLeapYear(year)) {

		cout << year << " is a leap year." << endl;
	}

	else {

		cout << year << " is not a leap year." << endl;
	}

	return 0;
}

bool IsLeapYear(int year)
{

	if (year % 4 != 0)
		return false;

	if (year % 100 != 0)
		return true;

	return true; // Is yeawr not a multiple of 400
}

//---// Main 3 -> 3 number sorting code (takes 3 number inputs, outputs in ascending order seaparated by one space)

int main3()
{

	double num1, num2, num3;// Declare vars
	double temp;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	cout << endl;

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	// if num1 > num2  we'll need a temp to switcharoo
	****

		// Ask for 3 number input
		****

		// Compare num1 to num2 
		// Tell output

		return 0;
}

//---// Main 4 -> Telephone nubers (converts words to telephone numbers)

#include <string>

int main4()
{
	char letter;
	int noOfLetters;
	char response;

	cout << "Enter Y/y to convert a telephone number " << "form letters to digits.\n" << "Enter any other letter to terminate the program" << endl;

	cin >> response;

	while (response == 'Y' || response == 'y')
	{

		cout << "Enter a telepone number using letters: ";
		cin >> letter;
		cout << endl;

		while (noOfLetters < 7)
		{
			noOfLetters++;

			switch (letter)
			{

			}
		}
	}
}

///// Quiz


//Q1

// Int -> the variable that is incrimented used to count the loops --- Initialization Expression
// j<10 -> the algebra declaring max loop counts, ends the loop when condition is not met --- Test Condition
// J++ -> increments the Int by 1 each loop, loop counter --- Increment Expression

//Q2

// int qempty(){return(f==r?1:0)}



///// Quiz


//Q1

// Int -> the variable that is incrimented used to count the loops --- Initialization Expression
// j<10 -> the algebra declaring max loop counts, ends the loop when condition is not met --- Test Condition
// J++ -> increments the Int by 1 each loop, loop counter --- Increment Expression

//Q2

// int qempty(){return(f==r?1:0)}


