////#include <iostream>
////#include<iomanip>
////using namespace std;
////
//////---// main 1 -> temperature conversion
////int main1()
////{
////	double celsius,
////		fahrenheit;
////
////	cout<<"enter the temperature in celsius:";
////	cin >> celsius;
////
////	fahrenheit = ((9.0 / 5.0) * celsius) + 32;
////
////	
////	cout << fixed << showpoint << setprecision(1) << fahrenheit << "degrees fahrenheit.\n";
////	//メモ << 'not scientific notation' << show decimal points* << precision after decimal <<
////
////	return 0;
////}
////
//////----// main 2 -> leap year code
////
////bool isleapyear(int year); // prototype for subalgorithm
////
////int main2()
////{
////	int year;
////	cout << "enter the year:"<<endl;
////	cin >> year;
////
////
////	if (isleapyear(year)) {
////
////		cout<<year<<" is a leap year."<<endl;
////	}
////
////	else {
////
////		cout << year << " is not a leap year." << endl;
////	}
////
////	return 0;
////}
////
////bool isleapyear(int year)
////{
////
////	if (year % 4 != 0)
////		return false;
////
////	if (year % 100 != 0)
////		return true;
////
////	return true; // is yeawr not a multiple of 400
////}
////
//////---// main 3 -> 3 number sorting code (takes 3 number inputs, outputs in ascending order seaparated by one space)
////
////int main3()
////{
////	
////	double num1, num2, num3;// declare vars
////	double temp;
////	cout << "enter three numbers: ";
////	cin >> num1 >> num2 >> num3;
////	cout << endl;
////
////	if (num1 > num2)
////	{
////		temp = num1;
////		num1 = num2;
////		num2 = temp;
////	}
////
////	// if num1 > num2  we'll need a temp to switcharoo
////	****
////
////		// ask for 3 number input
////		****
////
////		// compare num1 to num2 
////		// tell output
////
////		return 0;
////}
////
//////---// main 4 -> telephone nubers (converts words to telephone numbers)
////
////#include <string>
////
////int main4()
////{
////	char letter;
////	int noofletters;
////	char response;
////
////	cout << "enter y/y to convert a telephone number " << "form letters to digits.\n" << "enter any other letter to terminate the program" << endl;
////
////	cin >> response;
////
////	while (response == 'y' || response == 'y')
////	{
////
////		cout << "enter a telepone number using letters: ";
////		cin >> letter;
////		cout << endl;
////
////		while (noofletters < 7)
////		{
////			noofletters++;
////
////			switch (letter)
////			{
////
//#include <iostream>
//#include<iomanip>
//using namespace std;
//
////---// main 1 -> temperature conversion
//int main1()
//{
//	double celsius,
//		fahrenheit;
//
//	cout << "enter the temperature in celsius:";
//	cin >> celsius;
//
//	fahrenheit = ((9.0 / 5.0) * celsius) + 32;
//
//
//	cout << fixed << showpoint << setprecision(1) << fahrenheit << "degrees fahrenheit.\n";
//	//メモ << 'not scientific notation' << show decimal points* << precision after decimal <<
//
//	return 0;
//}
//
////----// main 2 -> leap year code
//
//bool isleapyear(int year); // prototype for subalgorithm
//
//int main2()
//{
//	int year;
//	cout << "enter the year:" << endl;
//	cin >> year;
//
//
//	if (isleapyear(year)) {
//
//		cout << year << " is a leap year." << endl;
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
//bool isleapyear(int year)
//{
//
//	if (year % 4 != 0)
//		return false;
//
//	if (year % 100 != 0)
//		return true;
//
//	return true; // is yeawr not a multiple of 400
//}
//
////---// main 3 -> 3 number sorting code (takes 3 number inputs, outputs in ascending order seaparated by one space)
//
//int main3()
//{
//
//	double num1, num2, num3;// declare vars
//	double temp;
//	cout << "enter three numbers: ";
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
//	
//
//		// ask for 3 number input
//		
//
//		// compare num1 to num2 
//		// tell output
//
//	return 0;
//}
//
////---// main 4 -> telephone nubers (converts words to telephone numbers)
//
//#include <string>
//
//int main4()
//{
//	char letter;
//	int noofletters;
//	char response;
//
//	cout << "enter y/y to convert a telephone number " << "form letters to digits.\n" << "enter any other letter to terminate the program" << endl;
//
//	cin >> response;
//
//	while (response == 'y' || response == 'y')
//	{
//
//		cout << "enter a telepone number using letters: ";
//		cin >> letter;
//		cout << endl;
//
//		while (noofletters < 7)
//		{
//			noofletters++;
//
//			switch (letter)
//			{
//
//			}
//		}
//	}
//}
//
