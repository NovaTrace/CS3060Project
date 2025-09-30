//Quinn Hackenberg
//CS 3060
//CPP hw3
#include <iostream>
#include<string>

using namespace std;

class BroadcastStation {
public:
	string stationName;
	double frequency;
	string type; // AM or FM	
	string genre;

	// Constructor
	BroadcastStation(string name, double freq, string typ, string gen){ 
		stationName = name;
		frequency = freq;
		type = typ;
		genre = gen;
	}

	// Methods
	string getName() { return stationName; };
	double getFrequency() { return frequency; };
	string getType() { return type; };
	string getGenre() { return genre; };

	void setName(string name) { stationName = name; }
	void setFrequency(double freq) { frequency = freq;}
	void setType(string typ) { type = typ; }
	void setGenre(string gen) { genre = gen; }
};

class RadioReciever {
public:
	int volume;
	string curStationName;
	double curFrequency;
	string curType; // AM or FM
	BroadcastStation preset1{ "N/A",0,"N/A","N/A" };
	BroadcastStation preset2{ "N/A",0,"N/A","N/A" };

	// Constructor
	RadioReciever() {
		volume = 0;
		curStationName = "N/A"; 
		curFrequency = 0; 
		curType = "N/A";
	}

	// Methods
	int getVolume() { return volume; };
	string getCurStationName() { return curStationName; };
	double getCurFrequency() { return curFrequency; };
	string getCurType() { return curType; };
	//getter for station

	void setVolume(int vol) { volume = vol; }

};