#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <cstdlib>
#include <iostream>

using namespace std;

class FeetInches;

ostream& operator << (ostream&, const FeetInches&);
istream& operator >> (istream&, FeetInches&);

class FeetInches
{
private:
	int feet;
	int inches;
	void simplify();
public:
	// Constructors
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	FeetInches(FeetInches& right)
	{
		feet = right.feet;
		inches = right.inches;
	}

	// Multiply function
	FeetInches multiply(FeetInches obj)
	{
		FeetInches temp;
		temp.feet = feet * obj.feet;
		temp.inches = inches * obj.inches;
		temp.simplify();
		return temp;
	}

	// Methods
	void setFeet(int f) { feet = f; }

	void setInches(int i) {
		inches = i;
		simplify();
	}

	int getFeet() const { return feet; }

	int getInches() const { return inches; }

	// Overloaded operators
	FeetInches operator+ (const FeetInches&);
	FeetInches operator- (const FeetInches&);
	FeetInches operator++ ();
	FeetInches operator++ (int);
	bool operator > (const FeetInches&);
	bool operator < (const FeetInches&);
	bool operator == (const FeetInches&);

	bool operator >= (const FeetInches&);
	bool operator <= (const FeetInches&);
	bool operator != (const FeetInches&);

	FeetInches operator= (double meters);

	// Conversion operators
	operator double();
	operator int();

	// Frineds
	friend ostream& operator << (ostream&, const FeetInches&);
	friend istream& operator >> (istream&, FeetInches&);
};

#endif