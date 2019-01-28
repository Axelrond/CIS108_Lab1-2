// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int age;
	char name[10], last_name[30], confidence[100];
	cout << "Enter your first name= ";
	cin >> name;
	cout << "Enter your last name= ";
	cin >> last_name;
	cout << "Enter your age= ";
	cin >> age;
	cout << "Enter your confidence in programmers in percentage (0-100)= ";
	cin >> confidence;
	system("pause");
	cout << "Hello ";
	cout << name;
	cout << " ";
	cout << last_name;
	cout << ", nice to meet you! \n";
	cout << "You might be ";
	cout << age;
	cout << " in human years, but in dog years you are " << 4 * age + 16 << endl; (age == 1); {
		cout << age + 14 << endl;}


		cout << "\n Writing good code takes hard work!";
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
