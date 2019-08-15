// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// Assignment 5
// This program asks the user to enter a position.
// The program then reads numbers from a file and
// gives us the number in the position provided by
// the user.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const int getPosition(int, int);

int main() {
	const long int SIZE = 100;
	int filePosition = 0,
		display[SIZE] = {0},
		position = 0,
		total = 0,
		count = 0;
	ifstream inputFile;
	string filename;
	cout << "Enter a filename that holds a series of numbers."
		<< "\n(The file should be placed in the same folder as the .cpp file)"
		<< "\nEnter the file name here: ";
	cin >> filename;
	inputFile.open(filename.c_str());
	if (inputFile.fail()) {
		cout << "Error opening file\n";
	}
	else {
		while (inputFile >> display[count]) {
			count++;
			total++;
		}
		filePosition = getPosition(position, total);
		if (filePosition < total && filePosition >= 0) {
			cout << "Number in that Position: "
				<< display[filePosition] << endl;
		}
		inputFile.close();
	}
	cin.ignore();
	cin.get();
	return 0;
}

const int getPosition(int p, int t) {
	cout << "Type the position and I will provide"
		<< " the number in that position."
		<< "\nPosition: ";
	cin >> p;
	if (p > t || p < 0) {
		cout << "The position does not exist.\n";
		return -1;
	}
	return p;
}