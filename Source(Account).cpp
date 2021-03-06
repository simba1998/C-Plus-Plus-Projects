// Source(Account).cpp : This file contains the 'main' function. Program execution begins and ends there.
// Elshaday Assefa

#include "pch.h"
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <string>

using namespace std;

int main()
{
	double balance, interest;;
	

	cout << "What is the balance of your Saving's account?:  ";
	cin >> balance;
	cout << "What is the interest of you Savings account?: ";// Saving's accounts are supposed to have some sort of interest right? (if user entered 0, it is invalid input)
	cin >> interest;
	do {
		if (interest <= 0) {
			cout << "Please enter a valid interest!:";
			cin >> interest;
		}

	} while (interest <= 0);
	SavingsAccount saving(balance, interest);

	cout << endl;
	cout << "What is the balance of your Checking account?: ";
	cin >> balance;
	cout << "What is the interest rate of your Checking account?: ";// checking accounts can have 0 interest
	cin >> interest;
	do {
		if (interest < 0) {
			cout << "Please enter a valid interest!:";
			cin >> interest;
		}

	} while (interest < 0);
	CheckingAccount checking(balance, interest);
	int command;
	double deposit,withdrawal;

	do {
		cout << endl;
		cout << "    Menu:" << endl;
		cout << "----------------" << endl;
		cout << "Enter 1 to make a deposit to Savings \nEnter 2 to make a deposit to Checkings \nEnter 3 to make a withdrawal from Savings \nEnter 4 to make a withdrawal from Checking \nEnter 5 to view the balance of Savings \nEnter 6 to view the balance of Checking \nEnter 7 to indicate that a month has passed\nEnter 0 to Exit" << endl;
		cout << "\nWhat would you like to do?: ";
		cin >> command;
		if (command == 1) {
			cout << "How much would you like to deposit into your Savings?: ";
			cin >> deposit;
			saving.deposit(deposit);

		}
		else if (command == 2) {
			cout << "How much would you like to deposit into your Checking?: ";
			cin >> deposit;
			checking.deposit(deposit);


		}
		else if (command == 3) {
			cout << "How much would you like to withdraw from your Savings?: ";
			cin >> withdrawal;
			saving.withdrawal(withdrawal);
		}
		else if (command == 4) {
			cout << "How much would you like to withdraw from your Checking? : ";
			cin >> withdrawal;
			checking.withdrawal(withdrawal);
		}
		else if (command == 5) {
			saving.printSavings();
		}
		else if (command == 6) {
			checking.printChecking();
		}
		else if (command == 7) {
			saving.monthlyProc();
			checking.monthlyProc();
		}
		else if (command == 0) {
			cout << "Thank you for using my program!" << endl;
		}

	} while (command != 0);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
