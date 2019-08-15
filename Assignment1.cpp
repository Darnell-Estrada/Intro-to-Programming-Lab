// DARNELL JAMES V. ESTRADA
// CS 1162 SEC 01
// Assignment 1
// This program tells the user the average hours
// he or she worked per day and the average pay
// per day he or she earned this week.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int MAX_DAYS = 5;
	double weeklyHours[MAX_DAYS],
		sumHours = 0.0,
		numDays = 5.0,
		averagePay = 0.0,
		averageHours = 0.0,
		hourlyPay = 10.0;
	int i = 0;
	string days[MAX_DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	for (i = 0; i < MAX_DAYS; i++) {
		cout << "Enter the number of hours worked on " << days[i] << ": ";
		cin >> weeklyHours[i];
		sumHours += weeklyHours[i];
	}
	averageHours = sumHours / numDays;
	averagePay = averageHours * hourlyPay;
	cout << "Average hours per day: " << averageHours
		<< "\nThe average pay per day this week is $"
		<< setprecision(2) << fixed << averagePay << ".\n";
	cin.ignore();
	cin.get();
	return 0;
}