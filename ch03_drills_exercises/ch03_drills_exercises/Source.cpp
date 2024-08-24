#include "std_lib_facilities.h"

int main()
{
	/*
	//Drill
	cout << "Enter the name of the person you wish to write to (followed by 'enter'):\n";
	string first_name;
	std::getline(cin, first_name);

	cout << "Now enter a few words to say to " << first_name << ":\n";
	string message;
	std::getline(cin, message);
	cout << "Dear " << first_name << ",\n\t" << message << "\n";

	cout << "Enter the name of another friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << first_name << ", have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "Enter 'm' if you friend is male or 'f' if female:\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "Enter the age of " << friend_name << ":\n";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
	{
		simple_error("You're kidding!");
	}
	else if (age < 12)
	{
		cout << "Next year " << friend_name << " will be " << age+1 << ".\n";
	}
	else if (age == 17)
	{
		cout << "Next year " << friend_name << " will be able to vote.\n";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	return 0;*/

	//Exercises

	/*
	//01 - Converts miles to kilometers
	cout << "Enter a number of miles to convert to kilometers:\n";
	double miles;
	cin >> miles;
	double kilometers = miles * 1.609;
	cout << "That is " << kilometers << "Km.";
	*/

	//EX2 
	cout << "Please enter two numbers\n";
	int val1 = 0;
	int val2 = 0;
	cin >> val1 >> val2;
	int valAdded = val1 + val2;
	int valDif = 0;

	if (val1 > val2)
	{
		valDif = val1 - val2;
	}

	else if (val2 > val1)
	{
		valDif = val2 - val1;
	}

	if (val1 > val2)
	{
		cout << val1 << " is greater and " << val2 << " is the smaller number.\n";
	}
	else if (val2 > val1)
	{
		cout << val2 << " is greater and " << val1 << " is the smaller number.\n";
	}

	cout << "The differnce of the values is " << valDif << " and the sum of them is " << valAdded <<".\n";



	return 0;

}