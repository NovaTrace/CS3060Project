//Quinn Hackenberg
//CS 3060
//CPP hw3 - Correct version of book
#include <iostream>
#include<string>

using namespace std;

class Patient {
public:
	string nameFirst;
	string nameMiddle;
	string nameLast;
	string address;
	int number;

	string eContactName;
	int eContactNumber;


	//// Constructors
	//BroadcastStation() {
	//	stationName = "N/A";
	//	frequency = 0;
	//	type = "N/A";
	//	genre = "N/A";
	//}

	Patient(string first, string mid, string last, string addr, int num, string eName, int eNum) {
		nameFirst = first;
		nameMiddle = mid;
		nameLast = last;
		address = addr;
		number = num;
		eContactName = eName;
		eContactNumber = eNum;
	}

	//// Methods
	//string getName() { return stationName; };
	//double getFrequency() { return frequency; };
	//string getType() { return type; };
	//string getGenre() { return genre; };

	//void setName(string name) { stationName = name; }
	//void setFrequency(double freq) { frequency = freq;}
	//void setType(string typ) { type = typ; }
	//void setGenre(string gen) { genre = gen; }
};

class Procedure {
public:
	string procedure;
	string date;
	string doctor;
	double charge;

	BroadcastStation preset1{};
	BroadcastStation preset2{};

	// Constructor
	/**
	*
	*
	*/
	Procedure(string proc, string d, string doc, double cha) {
		procedure = proc;
		date = d;
		doctor = doc;
		charge = cha;
	}

	// Methods
	string getProcedure() { return procedure; };
	string getDate() { return date; };
	string getDoctor() { return doctor; };
	double getCharge() { return charge; };

	void setProcedure(string proc) { procedure = proc; }
	void setDate(string d) { date = d; }
	void setDoctor(string doc) { doctor = doc; }
	void setCharge(double cha) { charge = cha; }


	void display() {
		cout << "Current Station: " << curStationName << endl;
		cout << "Frequency: " << curFrequency << " " << curType << endl;
		cout << "Volume: " << volume << endl;

		cout << "Preset 1: " << preset1.getName() << " - " << preset1.getFrequency() << " ";
		cout << preset1.getType() << " " << preset1.getGenre() << endl;
		cout << "Preset 2: " << preset2.getName() << " - " << preset2.getFrequency() << " ";
		cout << preset2.getType() << " " << preset2.getGenre() << endl;
	}

	void upVolume() { volume += 1; }
	void downVolume() { volume -= 1; }
	void upFrequency() { curFrequency += 0.1; }
	void downFrequency() { curFrequency -= 0.1; }
};

int main()
{
	Patient

		return 0;
}