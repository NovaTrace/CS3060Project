﻿#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool openFileIn(fstream&, string);
void showContents(fstream&);

int main()
{
	fstream dataFile;

	if (openFileIn(dataFile, "names2.txt"))
	{
		cout << "File opened successfully.\n";
		cout << "Now reading data from the file\n\n";
		showContents(dataFile);
		dataFile.close();
		cout << "\nDone.\n";
	}

	else
		cout << "File open error!" << endl;
	{

		return 0;
	}
}

bool openFileIn(fstream &file, string name)
{
	file.open(name, ios::in);
	if (file.fail())
		return true;
	else
		return false;
}

void showContents(fstream& file)
{
	string line;
	while (file >> line)
	{
		cout << line << endl;
	}
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//メモ
// For debugging - #include <bits/stdc++.h>
// fails to compile if headers are missing


