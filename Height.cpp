// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// Height
// This program demonstrates loops.

#include <iostream>
using namespace std;

int main() {
	float height = 0.0;
	int num = 0;
	cout <<"Enter the jump height: ";
	cin >> height;
	while (height < 2.0 || height > 5.0) {
		cout << "You must enter a height between 2 and 5.\n"
			<< "Enter the jump height: ";
		cin >> height;
	}
	while (num < 6) {
		cout << "The number is " << num << ".\n";
		num++;
	}
	cin.ignore();
	cin.get();
	return 0;
}