//Quinn Hackenberg
//CS 3060
//CPP 16.7

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 20;

class TestScores {
private:
	int* scores;
	int size;
public:
	//Constructor
	TestScores(int scoresArray[], int size)
	{
		this->size = size;
		scores = new int[size];
		for (int i = 0; i < size; i++)
			scores[i] = scoresArray[i];
	}

	double findAverage() const{
		double scoreAverage = 0;
		for (int i = 0; i < size; i++) {
				if (scores[i] < 0 || scores[i]>100) {
					throw "Invalid score in array";
				}
			scoreAverage += scores[i];
		}
		return scoreAverage / size;
	}
};

int main()
{
	srand(static_cast<unsigned>(time(0)));

	int scores[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scores[i] = (rand() % 111) - 5;
		cout << scores[i] << " ";
	}
	
	TestScores sample(scores, SIZE);
	try
	{
		cout << "\n\nAverage is: " << sample.findAverage();
	}
	catch (const char* msg)
	{
		cerr << "\n\nError: " << msg;
	}
	return 0;
}