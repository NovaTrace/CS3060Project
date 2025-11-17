//Quinn Hackenberg
//CS 3060
//CPP hw3 - Correct version of book
#include <iostream>
#include<string>
#include<initializer_list>
#include<cstdlib>
#include<iomanip>

using namespace std;

/**
* Patient constructor
* @param string First name
* @param string Middle name
* @param string Last name
* @param string Address
* @param string City
* @param string State
* @param string Zip code
* @param string Phone Number
* @param string Emergency contact's name
* @param string Emergency contact's number
*/
class Patient {
private:
	string nameFirst;
	string nameMiddle;
	string nameLast;

	string address;
	string city;
	string state;
	string zip;
	string number;

	string eContactName;
	string eContactNumber;

public:
	// Constructor
	Patient(string first, string mid, string last, string address, string city, string state, string zip, string num, string eName, string eNum) :
		nameFirst(first),
		nameMiddle(mid),
		nameLast(last),
		address(address),
		city(city),
		state(state),
		zip(zip),
		number(num),
		eContactName(eName),
		eContactNumber(eNum) 
	{}

	// Methods
	string getFirstName() const { return nameFirst; };
	string getMiddleName() const { return nameMiddle; };
	string getLastName() const { return nameLast; };
	string getAddress() const { return address; };
	string getCity() const { return city; };
	string getState() const { return state; };
	string getZip() const { return zip; };
	string getNumber() const { return number; };
	string getEContactName() const { return eContactName; };
	string getEContactNumber() const { return eContactNumber; };

	void setFirstName(string first) { nameFirst = first; }
	void setMiddleName(string mid) { nameMiddle = mid; }
	void setLastName(string last) { nameLast = last; }
	void setAddress(string addr) { address = addr; }
	void setCity(string c) { city = c; }
	void setState(string s) { state = s; }
	void setZip(string z) { zip = z; }
	void setNumber(string num) { number = num; }
	void setEContactName(string eName) { eContactName = eName; }
	void setEContactNumber(string eNum) { eContactNumber = eNum; }
};

/**
* Constructor for Procedure
* @param string procedure
* @param string date
* @param string doctor
* @param double charge
*/
class Procedure {
private:
	string procedure;
	string date;
	string doctor;
	double charge;

public:
	// Constructor
	Procedure(string procedure, string date, string doctor, double charge) :
		procedure(procedure),
		date(date),
		doctor(doctor),
		charge(charge)
	{}

	// Methods
	string getProcedure() const { return procedure; };
	string getDate() const { return date; };
	string getDoctor() const { return doctor; };
	double getCharge() const { return charge; };

	void setProcedure(string proc) { procedure = proc; }
	void setDate(string d) { date = d; }
	void setDoctor(string doc) { doctor = doc; }
	void setCharge(double cha) { charge = cha; }
};

// Function prototypes (Overloaded display for simplicity)
void display(Patient);
void display(Procedure);
void calculateBill(initializer_list<Procedure>);

int main()
{
	Patient curly("Curly", "P", "Brace", "56 Unemployed Blvd.", "Greely", "CO", "10101", "4101010000", "Pixil Studios", "5031010000");
	Procedure exam("Physical Exam", "10/8/2025", "Dr. Irvine", 250.00);
	Procedure xray("X-ray", "10/8/2025", "Dr. Jamison", 500.00);
	Procedure blood("Blood test", "10/8/2025", "Dr. Smith", 200.00);

	display(curly);
	display(exam);
	display(xray);
	display(blood);
	calculateBill({ exam, xray, blood });
	return 0;
}

/**
* Displays patient information
* @param Patient patient
*/
void display(Patient patient) 
{
	cout << "Patient Info: " << patient.getFirstName() << " " << patient.getMiddleName() << " " << patient.getLastName() << endl;
	cout << "Address: " << patient.getAddress() << ", " << patient.getCity() << ", " << patient.getState() << " " << patient.getZip() << endl;
	cout << "Phone Number: " << patient.getNumber() << endl;
	cout << "Emergency Contact: " << patient.getEContactName() << ", " << patient.getEContactNumber() << endl;
	cout << "\n------------------------\n" << endl;
}

/**
* Displays procedure information
* @param Procedure procedure
*/
void display(Procedure procedure) 
{
	cout << "Procedure: " << procedure.getProcedure() << endl;
	cout << "Date: " << procedure.getDate() << endl;
	cout << "Doctor: " << procedure.getDoctor() << endl;
	cout << "Charge: $" << procedure.getCharge() << endl << endl;
}

/**
* Displays total bill realistically simulated with cutting edge randomization
* @param initializer_list<Procedure> procedures - All procedures to be billed
*/
void calculateBill(initializer_list<Procedure> procedures) 
{

	double total = 0.0;
	for (const Procedure& p : procedures) 
	{
		total += p.getCharge();
	}

	double insuranceConstant = ((rand() % 2000) + 13000) / 1000.0;
	double insuranceCoverage = ((rand() % 4) + 96) / 100.0;
	cout << "*-----------------------------*\n*-----------------------------*\n";
	cout << "\nCost of procedures alone: $" << total << endl;
	cout << fixed << setprecision(2) << "\nTotal Charges: $" << total * insuranceConstant << endl;
	cout << fixed << setprecision(2) << "Final Balance after Insurance Adjustments: $" << total * insuranceConstant * insuranceCoverage << endl;
	cout << "Thank you for your continued investment in the American healthcare system! See you again soon!" << endl;
}