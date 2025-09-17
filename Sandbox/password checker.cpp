//Lab 2 9/17
#include <iostream>
using namespace std;

const int SIZE = 80;
const int MIN = 6;

// Function prototypes
void displayRequirements();
void displayResult(char[]);
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main()
{
	char cstring[SIZE]; // To hold the password

	displayRequirements();

	cout << "Enter your password: ";
	cin.getline(cstring, SIZE);

	displayResult(cstring);

	return 0;
}

// displayRequirements function
void displayRequirements()
{
		cout << "Password requirements:\n"
		<< " - The password should be at least " << MIN << " characters long.\n"
		<< " - The password should contain at least one uppercase \n"
		<< " and at least one lowercase letter.\n"
			<< " - The password should be at least one digit.\n\n";
}

// displayResult function
void displayResult(char str[])
{
	// Display whether the password is valid or not
	if (isValid(str))
	{
		cout << "The password is valid.\n";
	}
		
	// Display which requirements are not met
	else 
	{
		cout << "The password is invalid.\n";
		if(!hasLength(str))
			cout << "The password should be at least " << MIN << " characters long.\n";
		if(!hasLower(str))
			cout << "The password should contain at least one lowercase letter.\n";
		if (!hasUpper(str))
			cout << "The password should contain at least one uppercase letter.\n";
		if (!hasDigit(str))
			cout << "The password should contain at least one digit.\n";
	}
}

// isValid function

bool isValid(char str[])
{
	bool status = false;

	if (hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str))
	{
		status = true;
	}
	return status;
}

bool hasDigit(char str[])
{
	bool status = false;
	int count = 0;
	while (*str != '\0' && count == 0)
	{
		if (isdigit(*str))
		{
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0)
	{
		status = true;
	}
	return status;
}

bool hasLength(char str[])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count >= MIN)
	{
		return true;
	}
	else
		return false;
}

//// Alternative version of hasLower function
//bool hasLower(char str[])
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (islower(str[i]))
//		{
//			return true;
//		}
//		return false;
//	}
//}

bool hasLower(char str[])
{
	bool status = false;
	int count = 0;
	while(*str != '\0' && count ==0)
	{
		if (islower(*str))
		{
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0)
	{
		status = true;
	}
	return status;
}

bool hasUpper(char str[])
{
	bool status = false;
	int count = 0;
	while (*str != '\0' && count == 0)
	{
		if (isupper(*str))
		{
			count++;
		}
		else {
			*str++;
		}
	}

	if (count > 0)
	{
		status = true;
	}
	return status;
}