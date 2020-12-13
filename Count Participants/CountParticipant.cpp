/*
Program	Name 	: User Defined Type Case
Created by	 	: Ardella Dean Awalia
Student ID	 	: 1917051024
Starting Date	: Dec 6th 2020
Finishing Date	: Dec 7th 2020

as 6th Assignment of Data Structure and Algorithm class
Department of Computer Science
Faculty of Mathematics and Natural Sciences
University of Lampung

Tangerang, Dec 6th 2020
*/

#include <iostream>
using namespace std;

struct Participant {
	string firstName;
	string lastName;
	string age;
	string organization;
};

bool isAlpha(string input) {
	for (int i=0; i<input.length(); i++) {
		if (input[i] < 'a' || input[i] > 'z')
			return false;
	}
	return true;
}

bool isNumber(string input) {
	if (input[0] == '0')
		return false;
	else {
		for (int i=0; i<input.length(); i++) {
			if (input[i] < '0' || input[i] > '9')
				return false;
		}
	}
	return true;
}

int main() {
	int n, count=0;
	cout << "Enter number participant: ";
	cin >> n;

	Participant participant[n];
	for (int i=0; i<n; i++) {
		cout << "\nParticipant #" << i+1 << endl;
		cout << "-----------------" << endl;
		cout << "First Name\t: ";
		cin >> participant[i].firstName;
		if (isAlpha(participant[i].firstName)) {
			cout << "Last Name\t: ";
			cin >> participant[i].lastName;
			if (isAlpha(participant[i].lastName)) {
				cout << "Age\t\t: ";
				cin >> participant[i].age;
				if (isNumber(participant[i].age)) {
					cout << "Organization\t: ";
					cin >> participant[i].organization;
					if (isAlpha(participant[i].organization)) {
						cout << endl;
						count++;
					}
					else {
						system("cls");
						cout << "Organization of participant " << i+1 << " must be Alphabet!\n\n";
						break;
					}
				}
				else {
					system("cls");
					cout << "Age of participant " << i+1 << " must be Number and more than 0!\n\n";
					break;
				}
			}
			else {
				system("cls");
				cout << "Last Name of participant " << i+1 << " must be Alphabet!\n\n";
				break;
			}
		}
		else {
			system("cls");
			cout << "First Name of participant " << i+1 << " must be Alphabet!\n\n";
			break;
		}
	}

	system("pause");
	system("cls");

	for (int i=0; i<count; i++) {
		cout << "\nParticipant #" << i+1 << endl;
		cout << "First Name\t: ";
		cout << participant[i].firstName << endl;
		cout << "Last Name\t: ";
		cout << participant[i].lastName << endl;
		cout << "Age\t\t: ";
		cout << participant[i].age << endl;
		cout << "Organization\t: ";
		cout << participant[i].organization << endl;
	}
	cout << "\nAttendances\t: " << count << endl;
	cout << "Percentage\t: " << count << "/" << n << endl;

	return 0;
}
