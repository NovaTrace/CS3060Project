//Quinn Hackenberg
//CS 3060
//CPP 14.13 - FeetInches to metric,  Option 2: Overloaded operators
//Operator= at line 95, Main at end of file

#include <cstdlib>
#include <cmath>
#include "FeetInches.h"

const double MeterToInch = 39.37;

void FeetInches::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

FeetInches FeetInches::operator+ (const FeetInches& right)
{
	FeetInches temp;

	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}

FeetInches FeetInches::operator- (const FeetInches& right)
{
	FeetInches temp;

	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}

FeetInches FeetInches::operator++ ()
{
	++inches;
	simplify();
	return *this;
}

FeetInches FeetInches::operator++ (int)
{
	FeetInches temp(feet, inches);
	inches++;
	simplify();
	return temp;
}

bool FeetInches::operator> (const FeetInches& right)
{
	bool status;

	if ((feet > right.feet) || ((feet == right.feet) && (inches > right.inches)))
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator< (const FeetInches& right)
{
	bool status;

	if ((feet < right.feet) || ((feet == right.feet) && (inches < right.inches)))
		status = true;
	else
		status = false;
	return status;
}

bool FeetInches::operator== (const FeetInches& right)
{
	bool status;

	if  ((feet == right.feet) && (inches == right.inches))
		status = true;
	else
		status = false;
	return status;
}

// Allows for the processing of inputs in meters
// *********************************************
FeetInches FeetInches::operator= (double meters) 
{
	inches = static_cast<int>(round(meters * MeterToInch));
	simplify();
	return *this;
}// *********************************************

// Convert a FeetInches object to a double
FeetInches::operator double() 
{
	double temp = feet;
	temp += (inches / 12.0);
	return temp;
}

// Convert a FeetInches object to an int
FeetInches::operator int() 
{
	return feet;
}

// New operators

// 1 of 3 Overloaded >= operator
bool FeetInches::operator>= (const FeetInches & right) 
{
	bool status;
	
	if ((feet > right.feet) || ((feet == right.feet) && (inches > right.inches)))
		status = true;
	else if ((feet == right.feet) && (inches == right.inches))
		status = true;
	else
		status = false;
	return status;
}

// 2 of 3 Overloaded <= operator
bool FeetInches::operator<= (const FeetInches& right) 
{
	bool status;

	if ((feet < right.feet) || ((feet == right.feet) && (inches < right.inches)))
		status = true;
	else if ((feet == right.feet) && (inches == right.inches))
		status = true;
	else
		status = false;
	return status;
}

// 3 of 3 Overloaded != operator
bool FeetInches::operator!= (const FeetInches& right) 
{
	bool status;

	if ((feet == right.feet) && (inches == right.inches))
		status = false;
	else
		status = true;
	return status;
}

// In/out overides
ostream& operator<< (ostream& out, const FeetInches& obj)
{
	out << obj.feet << " feet," << obj.inches << " inches";
	return out;
}

istream& operator>> (istream& in, FeetInches& obj)
{
	int f, i;
	in >> f >> i;
	obj.setFeet(f);
	obj.setInches(i);
	return in;
}

int main() {

	FeetInches length;

	length = 3.5;   // 3.5 meters auto-converts to feet and inches
	cout << length;
	return 0;
}
