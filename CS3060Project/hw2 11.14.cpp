#include <iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

const int BINSIZE = 30;
const int SIZE = 10;

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
			cout << "\nError: Bin can not hold more than " << BINSIZE << " parts\n";
			cout << BINSIZE - qty << " parts added." << endl;
			qty = BINSIZE;
		}
		else
		{
			qty += amount;
			cout << "\n" << amount << " parts added." << endl;
		}
		
	}
	void RemoveParts(int amount)
	{
		if (qty - amount < 0)
		{
			cout << "\nError: Bin can not have negative parts\n";
			cout << qty << " parts removed." << endl;
			qty = 0;
		}
		else
		{
			qty -= amount;
			cout << "\n" << amount << " parts removed." << endl;
		}
	}
};

// Function prototype declarations
int inputValidation(int min, int max);
void displayInventory(Bin inventory[]);


int main()
{ 
	// Initializing array with constructed bins
	Bin inventory[SIZE]
	{
		{"Valve", 10},
		{"Bearing", 5},
		{"Bushing", 15},
		{"Coupling", 21},
		{"Flange", 7},
		{"Gear", 5},
		{"Gear Housing", 5},
		{"Vacuum Gripper", 25},
		{"Cable", 18},
		{"Rod", 12}
	};

	int userInput;

	// Main loop
	do
	{
		displayInventory(inventory);

		cout << "Select a bin (1-10) or 0 to exit: ";
		userInput = inputValidation(0, 10);
		if (userInput != 0)
		{
			cout << "\n" << inventory[userInput - 1].item << " selected. Current quantity: " << inventory[userInput - 1].qty << endl;
			cout << "Enter 1 to add parts, 2 to remove parts: ";
			if (inputValidation(1, 2) == 1)
			{
				cout << "\nEnter number of parts to add: ";
				inventory[userInput - 1].AddParts(inputValidation(0, BINSIZE));
			}
			else
			{
				cout << "\nEnter number of parts to remove: ";
				inventory[userInput - 1].RemoveParts(inputValidation(0, BINSIZE));
			}
		}

	} while (userInput != 0);
	
	cout << "Thank you for using the inventory management system.\n";

	return 0;
}


/**
* Simple validation to check that input is a valid integer
* @param int min - the minimum acceptable integer input
* @param int max - the maximum acceptable integer input
* @return int input - the validated integer input from user
*/
int inputValidation(int min, int max)
{
	int userInput;

	// Checks for Int in range
	while (!(cin >> userInput) || (cin.peek() != '\n') || (userInput > max) || (userInput < min))
	{
		cout << "Invalid input. Please enter a valid integer: ";

		// Clears flags and bad inputs
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return userInput;
}

/**
* Desplays the current inventory of bins
* 
*/
void displayInventory(Bin inventory[])
{
	cout << "\nCurrent Inventory:\n";
	cout << "------------------\n";
	int totalParts = 0;
	for (int i = 0; i < SIZE; i++)
	{
		totalParts += inventory[i].qty;
		cout << left << setw(25) << setfill('.') << (to_string(i + 1) + ". " + inventory[i].item) << inventory[i].qty;
		if (inventory[i].qty < 5)
		{
		cout << " ***LOW STOCK***";
		}
		cout << endl;
	}
	cout << "------------------\n";
	cout << "Total parts in inventory: " << totalParts << endl;
	cout << "------------------\n\n";
}