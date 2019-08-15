// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// This program asks the user to enter a number.
// It then proceeds to print the first 10 multiples
// of that number.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int wholeNum = 0,
		num = 0;
	cout << "Enter a whole number: ";
	cin >> wholeNum;
	while (num < 9) {
		cout << wholeNum << " times " << num
			<< " is " << wholeNum * num << ".\n";
			num++;
		}
	cin.ignore();
	cin.get();
	return 0;
}