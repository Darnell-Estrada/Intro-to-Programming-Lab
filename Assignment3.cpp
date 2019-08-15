// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// Assignment 3
// This program asks the user to enter marks in a course.
// It then figures out the grade he or she will receive.

#include <iostream>
using namespace std;

int main() {
	int score = 0,
		grade = 0;
	cout << "Enter the numeric course score: ";
	cin >> score;
	grade = score / 10;
	cout << "You get ";
	switch (grade) {
		case 10: {
			cout << "an A.";
			break;
		}
		case 9: {
			cout << "an A.";
			break;
		}
		case 8: {
			cout << "a B.";
			break;
		}
		case 7: {
			cout << "a C.";
			break;
		}
		case 6: {
			cout << "a D.";
			break;
		}
		case 5: {
			cout << "an F.";
			break;
		}
		default: {
			cout << "an F.";
			break;
		}
	}
	cout << endl;
	cin.ignore();
	cin.get();
	return 0;
}