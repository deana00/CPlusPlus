/*
Program	Name 	: Showing Local Login Date and Time
Created by	: Ardella Dean Awalia
Student ID	: 1917051024
Starting Date	: Dec 4th 2020
Finishing Date	: Dec 6th 2020

as 6th Assignment of Data Structure and Algorithm class
Department of Computer Science
Faculty of Mathematics and Natural Sciences
University of Lampung

Tangerang, Dec 6th 2020
*/

#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

bool isUsername(string, string);
bool isPassword(string, string);

int main() {
	string username_signup, username_login, password_signup, password_login;
	char ch;
	time_t waktu;
	struct tm *local_time; 
	char login_time[30];

	time(&waktu);
	local_time = localtime(&waktu);
	strftime(login_time, sizeof(login_time), "%a, %b %d %Y at %H:%M:%S", local_time);

	cout << "\t===============================" << endl;
	cout << "\t\tAccount Sign Up	   " << endl;
	cout << "\t===============================" << endl;
	cout << "\nUsername\t: ";
	cin >> username_signup;
	cout << "Password\t: ";
	ch = getch();
	while (ch != 13) {
		password_signup.push_back(ch);
		cout << "*";
		ch = getch();
	}

	system("cls");

	cout << "\t===============================" << endl;
	cout << "\t\tAccount Login 	   " << endl;
	cout << "\t===============================" << endl;
	cout << "\nUsername\t: ";
	cin >> username_login;
	cout << "Password\t: ";
	ch = getch();
	while (ch != 13) {
		password_login.push_back(ch);
		cout << "*";
		ch = getch();
	}

	system("cls");

	if (isUsername(username_signup, username_login) && isPassword(password_signup, password_login)) {
		cout << "Login Successful" << endl;
		cout << "Hello, " << username_signup << ". Welcome to Our Program, enjoy!" << endl;
		cout << "\n\nLogin time: " << login_time << endl;;
	}
	else
		cout << "Username or Password is Incorrect. Please try again or contact the Administator." << endl;

	return 0;
}

bool isUsername(string username_signup, string username_login) {
	return username_signup == username_login;
}

bool isPassword(string password_signup, string password_login) {
	return password_signup == password_login;
}
