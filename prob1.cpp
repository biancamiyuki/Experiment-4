#include<iostream>
using namespace std;

void add()
{
 int x, y, sum;
 
 cout << "Enter your two numbers: ";
 cin >> x; 
 cin >> y;
 
 sum = x + y;
 cout <<  "Result is: " << sum;
 
 return;
}

void subtract()
{
 int x, y, difference;
 
 cout << "Enter your two numbers: ";
 cin >> x; 
 cin >> y;
 
 difference = x - y;
 cout <<  "Result is: " << difference;
 
 return;
}

void multiply()
{
 int x, y, product;
 
 cout << "Enter your two numbers: ";
 cin >> x; 
 cin >> y;
 
 product = x * y;
 cout << "Result is: " << product;
 
 return;
}

void divide()
{
 int x, y, quotient;
 
 cout << "Enter your two numbers: ";
 cin >> x; 
 cin >> y;
 
 quotient = x / y;
 cout << "Result is: " << quotient;
 
 return;
}

void mod()
{
 int x, y, modul;
 
 cout << "Enter your two numbers: ";
 cin >> x; 
 cin >> y;
 
 modul = x % y;
 cout << "Result is: " << modul;
 
 return;
}


int main()
{
	int choice;
	char yes;
	
	do{
	
		cout << "MENU: \n";
		cout << "1. Add \n";
		cout << "2. Subtract \n";
		cout << "3. Multiply \n";
		cout << "4. Divide \n";
		cout << "5. Modulus \n";
		
		cout << "Enter your choice: ";
		cin >> choice;
switch(choice)
{
	case 1:
	{
		add();
		break;
	}
	
	case 2:
	{
		subtract();
		break;
	}
	
	case 3:
	{
		multiply();
		break;
	}
	
	case 4:
	{
		divide();
		break;
	}
	
	case 5:
	{
		mod();
		break;
	}
	
	default:
	cout << "You can only choose from 1 to 5!" << endl;
	}
	cout << endl << "Press 'y' to continue: ";
	cin>> yes;
	cout << "\n";
	}
	while (yes=='y' || yes=='Y');
	
	return 0;
}

