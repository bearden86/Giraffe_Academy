#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	cout << "   /|" << endl;
	cout << "  / |" << endl;
	cout << " /  |" << endl;
	cout << "/___|" << endl;

	string characterName = "John";
	int characterAge;
	characterAge = 35;

	cout << "There once was a man named " << characterName << endl; // endl = \n
	cout << "He was " << characterAge << " years old" << endl;
	cout << "He liked the name " << characterName << endl;
	cout << "But did not like being " << characterAge << endl;

	characterName = "Mike";
	characterAge = 50;

	cout << "There once was a man named " << characterName << endl;
	cout << "He was " << characterAge << " years old" << endl;
	cout << "He liked the name " << characterName << endl;
	cout << "But did not like being " << characterAge << endl;

	// variable types
	char grade = 'A';
	string phrase = "Giraffe Academy";
	int year = 1986;
	float pi = 3.14; // up to 7 decimal points
	double plancksConstant = 6.62607015; // doubles can have more decimal points than floats (15)
	bool collegeGrad = true;

	// string functions
	string phrase2 = "Lockheed Martin";
	cout << phrase2.length() << endl; // print length of string phrase2
	cout << phrase2[3] << endl; // index select individual chars within the string, starting from 0,1,2,3...
	phrase2[1] = 'a';
	cout << phrase2 << endl;
	cout << phrase2.find("Martin", 0) << endl; // () = parameters, arguments, 'pass in'
	cout << phrase2.substr(9, 4) << endl; // grabs a portion of string (starting index, length)

	// numbers
	int wholeNum = 5;
	double decimalNum = 3.8;

	wholeNum++; // increment the value by 1, -- decrement by 1
	wholeNum + 20; //  use operators, +, -, /, *

	cout << pow(2, 5) << endl; // pow = exponents (number, power), can be decimal
	cout << sqrt(36) << endl; // square root, can be decimal
	cout << round(4.3) << endl; // round to nearest whole number
	cout << ceil(1.1) << endl; // always rounds up
	cout << floor(1.9) << endl; // always rounds down
	cout << fmax(2, 24) << endl; // returns larger number, fmin for smaller number

	int age; // declaring a variable with no initial value
	cout << "Enter your age: "; // prompt to define a value
	cin >> age; // stores user input into age variable
	cout << "You are " << age << " years old"; // prints result of user input

	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Hello " << name << endl;


	// calculator
	double num1, num2, num3, num4; // use double type to allow max decimal places
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	cout << "Enter fourth number: ";
	cin >> num4;
	cout << num1 + num2 << endl;
	cout << num3 * num4 << endl;

	// madlibs
	string color, pluralNoun, celebrity;

	cout << "Enter a color: ";
	getline(cin, color);
	cout << "Enter a plural noun: ";
	getline(cin, pluralNoun);
	cout << "Enter a celebrity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << endl;
	cout << pluralNoun << " are blue" << endl;
	cout << "I love " << celebrity << endl;

	return 0;
}