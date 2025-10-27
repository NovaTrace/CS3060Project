// Quinn Hackenberg
// Midterm Candy Bar

#include <iostream>
#include<string>

#include<iomanip>

using namespace std;

const int ITEMS = 5;
struct Candy
{
public:
	string Name;
	double cost;
	int qty;

	// constructor
	Candy(string name, double cost, int qty) : Name(name), cost(cost), qty(qty) {}

	// Mutators
	string getName() const { return Name; };
	double getCost() const { return cost; };
	int getQty() const { return qty; };

	void setQty(int q) { qty = q; };

};

// Function prototype 
void displayOptions(Candy vend[]);
int choiceValidation();
double moneyValidation(double cost);

void main() 
{
	// Candy bar initialization
	Candy vendingMachine[ITEMS]
	{
		{"Snickers", 1.00, 15},
		{"Kit Kat", 0.95, 15},
		{"Twix", 0.85, 15},
		{"Milky Way", 0.90, 15},
		{"Reese's", 1.00, 15}
	};

	int exit = false;
	double earnings = 0.0;
	do {
		displayOptions(vendingMachine);
		cout << "\nPlease select one of the following: \n";
		int userChoice = choiceValidation();
		if ((userChoice >= 1) && (userChoice <= ITEMS))
		{
			if (vendingMachine[userChoice - 1].getQty() == 0)
			{
				cout << "Sorry, this item is out of stock.\n";
			}
			else
			{
				cout << "You selected " << vendingMachine[userChoice - 1].getName() << ".\n";
				cout << "Please enter up to $1:\n";
				double userMoney = moneyValidation(vendingMachine[userChoice - 1].getCost());
				cout << fixed << setprecision(2) << "Thank you, your change is $" << userMoney - vendingMachine[userChoice - 1].getCost() << endl;
				earnings += vendingMachine[userChoice - 1].getCost();
				vendingMachine[userChoice - 1].setQty(vendingMachine[userChoice - 1].qty - 1);
			}
			
		}

		else if (userChoice == (ITEMS + 1))
		{
			for (int i = 0; i < ITEMS; i++)
			{
				vendingMachine[i].setQty(15);
			}
			cout << "Vending machine refilled.\n";
		}
		else 
			(exit = true);
		
	} while (exit == false);
	
	cout << fixed << setprecision(2) << "\nTotal earnings: $" << earnings << endl;
}

void displayOptions(Candy vend[])
{
	cout << "\nVending Machine Contents:\n";
	for (int i = 0; i < ITEMS; i++)
	{
		
		cout << i + 1 << ". " << vend[i].getName() << endl;
	}
	cout << ITEMS + 1 << ". Refill Machine\n";
	cout << ITEMS + 2 << ". Exit\n";
}

int choiceValidation()
{
	int userInput;
	while (!(cin >> userInput) || (cin.peek() != '\n') || (userInput < 1) || (userInput > (ITEMS + 2))) 
	{
		cout << "Invalid input. Please select one of the options";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return userInput;
}

double moneyValidation(double cost)
{
	double userInput;
	while (!(cin >> userInput) || (cin.peek() != '\n') || (userInput < cost) || (userInput > 1.00))
	{
		cout << "Invalid input. Please enter a valid amount of money: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return userInput;
}