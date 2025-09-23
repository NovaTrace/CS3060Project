#include <iostream>
#include<fstream>
#include<string>
using namespace std;

const int BINSIZE = 30;



int main()
{ 

}

/**
* Validates that input is a valid integer
* Paramaters: user 
* 
*/
int inputValidation(int input)
{
	int userInput;
	while (!(cin >> userInput) || (cin.peek() != '\n'))
	{
		cout << "Invalid input. Please enter an integer: ";

		// Clears flags and bad inputs
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return userInput;
}
//((scanf("%d", &userInput) == true) && (getchar() == '\n')) {

struct Bin
{
public:
	string item;
	int qty;

	// constructor
	Bin(string item, int qty) : item(item), qty(qty) {}

	// methods
	void AddParts(int amount)
	{
		if (qty + amount > BINSIZE)
		{
			cout << "Error: Bin can not hold more than " << BINSIZE << " parts\n";
			qty = BINSIZE;
		}
		else
		{
			qty += amount;
		}
	}
	void RemoveParts(int amount)
	{
		if (qty - amount < 0)
		{
			cout << "Error: Bin can not have negative parts\n";
			qty = 0;
		}
		else
		{
			qty -= amount;
		}
	}
};