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

	// Constructors
	BroadcastStation() {
		stationName = "N/A";
		frequency = 0;
		type = "N/A";
		genre = "N/A";
	}

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
	string curGenre; // Genre is missing from RaidoReciever explanation
	BroadcastStation preset1{};
	BroadcastStation preset2{};

	// Constructor
	RadioReciever() {
		volume = 0;
		curStationName = "N/A"; 
		curFrequency = 0; 
		curType = "N/A";
		curGenre = "N/A";
	}

	// Methods
	int getVolume() { return volume; };
	string getCurStationName() { return curStationName; };
	double getCurFrequency() { return curFrequency; };
	string getCurType() { return curType; };
	string getCurGenre() { return curGenre; };

	void setVolume(int vol) { volume = vol; }
	void setCurStation(string name) { curStationName = name; }
	void setCurFrequency(double freq) { curFrequency = freq; }
	void setCurType(string typ) { curType = typ; }
	void setCurGenre(string gen) { curGenre = gen; } 
	
	/**
	* Sets the current station as a preset
	* @param int presetNum - The number of preset saved to
	*/
	void setPreset(int presetNum) {
		if (presetNum == 1) {
			preset1.setName(curStationName);
			preset1.setFrequency(curFrequency);
			preset1.setType(curType);
			preset1.setGenre(curGenre);
		}
		else if (presetNum == 2) {
			preset2.setName(curStationName);
			preset2.setFrequency(curFrequency);
			preset2.setType(curType);
			preset2.setGenre(curGenre);
		}
		else {
			cout << "Invalid preset number. Please choose 1 or 2." << endl;
		}
	}

	/**
	* Loads a station from a preset
	* @param int presetNum - The number of preset loaded from
	*/
	void loadPreset(int presetNum) {
		if (presetNum == 1) {
			curStationName = preset1.getName();
			curFrequency = preset1.getFrequency();
			curType = preset1.getType();
			curGenre = preset1.getGenre();
		}
		else if (presetNum == 2) {
			curStationName = preset2.getName();
			curFrequency = preset2.getFrequency();
			curType = preset2.getType();
			curGenre = preset2.getGenre();
		}
		else {
			cout << "Invalid preset number. Please choose 1 or 2." << endl;
		}
	}

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
	RadioReciever myRadio;
	myRadio.setVolume(10);
	myRadio.setCurStation("Classic Rock");
	myRadio.setCurFrequency(98.1);
	myRadio.setCurType("FM");
	myRadio.setCurGenre("Rock");
	myRadio.setPreset(1);
	myRadio.display();
	cout << endl;

	myRadio.upVolume();
	myRadio.upFrequency();
	myRadio.display();
	cout << endl;

	myRadio.setCurStation("Morning News");
	myRadio.setCurFrequency(450);
	myRadio.setCurType("AM");
	myRadio.setCurGenre("News");
	myRadio.display();
	cout << endl;

	myRadio.setPreset(2);
	myRadio.display();
	cout << endl;

	myRadio.loadPreset(1);
	myRadio.downVolume();
	myRadio.downVolume();
	myRadio.display();
	cout << endl;

	return 0;
}