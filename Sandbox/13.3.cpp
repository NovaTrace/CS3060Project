//Quinn Hackenberg
//CS 3060
//CPP hw3
#include <iostream>
#include<string>

using namespace std;

class Car 
{
	private:
		int yearModel;
		string make;
		int speed;

	public:
		// Constructor
		Car(int year, string mk) : yearModel(year), make(mk) 
		{
			speed = 0;
		}

		// Methods
		int getYearModel() { return yearModel; };
		string getMake() { return make; };
		int getSpeed() { return speed; };

		void accelerate() { speed += 5; };
		void brake() { speed -= 5; };
};

int main()
{
	Car myCar(2019, "Kia");

	cout << myCar.getMake() << " is accelerating." << endl;
	cout << "Current speed: " << myCar.getSpeed() << endl;

	for (int i = 0; i < 5; i++) {
		myCar.accelerate();
		cout << "Current speed: " << myCar.getSpeed() << endl;
	}

	cout << "\n" << myCar.getMake() << " is braking." << endl;
	cout << "Current speed: " << myCar.getSpeed() << endl;
	for (int i = 0; i < 5; i++) {
		myCar.brake();
		cout << "Current speed: " << myCar.getSpeed() << endl;
	}
}