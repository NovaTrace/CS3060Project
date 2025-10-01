#include <iostream>
#include<fstream>

using namespace std;

const int SIZE = 12;

struct Division 
{
	char divName[SIZE]; // Division name
	int quarter; // Quarter number
	double sales; // Quarterly sales

};

int main()
{
	fstream file("corp.dat", ios::out | ios::binary);

	Division east, west, north, south;

	int qtr;

	strcpy_s(east.divName, "East");
	strcpy_s(west.divName, "West");
	strcpy_s(north.divName, "North");
	strcpy_s(south.divName, "South");

	cout << "Enter the quarterly sales for the East Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		east.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> east.sales;
		file.write(reinterpret_cast<char *>(&east), sizeof(east)); // break down //
	}

	cout << "Enter the quarterly sales for the West Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		west.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> west.sales;
		file.write(reinterpret_cast<char *>(&west), sizeof(west));
	}

	cout << "Enter the quarterly sales for the North Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		north.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> north.sales;
		file.write(reinterpret_cast<char*>(&north), sizeof(north)); // break down //
	}

	cout << "Enter the quarterly sales for the South Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		south.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> south.sales;
		file.write(reinterpret_cast<char*>(&south), sizeof(south));
	}

	file.close();

	return 0;
}