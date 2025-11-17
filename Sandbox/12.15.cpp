#include <iostream>
#include <string>
#include <cctype> // check //
#include <iomanip>
#include <fstream>

using namespace std;	

// Function prototypes
int countSentences(string);
int countWords(string);

int main()
{
	int sentences;
	int words;
	double average;

	sentences = countSentences("test.txt");

	words = countWords("test.txt");

	average = static_cast<double>(words) / sentences;

	cout << "The file contains " << words << " words, and " << sentences << " sentences.\n";
	cout << "There is an average of " << setprecision(1) << fixed << average << " words per sentence.\n";
	return 0;
}

int countSentences(string filename)
{
	const int SIZE = 500;
	char input[SIZE];
	fstream inputFile;
	int numSentences = 0;

	inputFile.open(filename, ios::in); //check//
	if (!inputFile)
	{
		cout << "ERROR: Cannot open file.\n";
		exit(0); //check//
	}

	inputFile.getline(input, SIZE); // Use \n as a delimiter
	while (!inputFile.eof())
	{
		for (int index = 0; input[index] != '\0'; index++)
		{
			if (input[index] == '.') { numSentences++; }
		}

		inputFile.getline(input, SIZE); // Use \n as a delimiter
	}

	inputFile.close();
	return numSentences;
}

int countWords(string filename)
{
	const int SIZE = 500;
	char input[SIZE];	
	fstream inputFile;
	int numWords = 0;

	inputFile.open(filename, ios::in);
	if(!inputFile)
	{
		cout << "ERROR: Cannot open file.\n";
		exit(0);
	}

	inputFile.getline(input, SIZE);
	while (!inputFile.eof())
	{

		int index = 0;
		while (input[index] != '\0')
		{
			while (isspace(input[index]) && input[index] != '\0') { index++; } // Skip spaces
			if (input[index] != '\0') 
			{	
				numWords++; 

				while (!isspace(input[index]) && input[index] != '\0') { index++; } // Skip non-spaces
			}
		}

		inputFile.getline(input, SIZE);
	}

	inputFile.close();
	return numWords;
}