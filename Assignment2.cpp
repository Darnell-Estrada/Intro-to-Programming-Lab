// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// Assignment 2
// This program tells the user if the number
// he or she entered is divisible by 6.

#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter a number to determine if it is divisble by 6 or not: ";
	cin >> num;
	cout << "The number " << num;
	if (num % 2 == 0 && num % 3 == 0) {
		cout << " is divisible by 6.";
	}
	else {
		cout << " is not divisible by 6.";
	}
	cout << endl;
	cin.ignore();
	cin.get();
	return 0;
}