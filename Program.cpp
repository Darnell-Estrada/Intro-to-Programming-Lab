// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// PROGRAM
// This program calculates the user's gross
// pay along with the average age among 3 people.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double pay = 0.0,
		hours = 0.0,
		gross = 0.0,
		age1 = 0.0,
		age2 = 0.0,
		age3 = 0.0,
		sum = 0.0,
		num = 3.0,
		avg = 0.0;
	cout << "Enter your pay: $";
	cin >> pay;
	cout << "Enter how many hour(s) worked: ";
	cin >> hours;
	gross = pay * hours;
	cout << "Your pay rate is $" << setprecision(2)
		<< fixed << gross << ".\n";
	cout << "Enter your age: ";
	cin >> age1;
	cout << "Enter your professor's age: ";
	cin >> age2;
	cout << "Enter your best friend's age: ";
	cin >> age3;
	sum = age1 + age2 + age3;
	avg = sum / num;
	cout << "The average age among these three people is "
		<< (int)avg << ".\n";
	cin.ignore();
	cin.get();
	return 0;
}