// Sundays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream> 
using namespace std;

void Sundays() {
	int counterOfSundays = 0;
	int day = 7;
	int month = 1;
	int year = 1900;
	do {
		if (year > 1900 && day == 1) {
			counterOfSundays++;
			cout << "Counter = " << counterOfSundays << endl;
			cout << day << "." << month << "." << year << endl;
		}
		day += 7;
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
			month++;
			day -= 30;
		}
		else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
			if (month == 12) {
				month = 1;
				year += 1;
			}
			else {
				month++;
			}
			day -= 31;
		}
		else if (month == 2 && year % 4 == 0 && year % 400 == 0 && day > 29) {
			month++;
			day -= 29;
		}
		else if (month == 2 && year % 4 == 0 && year % 400 != 0 && year % 100 == 0 && day > 28) {
			month++;
			day -= 28;
		}
		else if (month == 2 && year % 4 == 0 && year % 400 != 0 && year % 100 != 0 && day > 29) {
			month++;
			day -= 29;
		}
		else if (month == 2 && year % 4 != 0 && day > 28) {
			month++;
			day -= 28;
		}
	} while (year <= 2000);
	cout << counterOfSundays;
	cin >> counterOfSundays;
}

int main()
{
	
	Sundays();
    return 0;
}

