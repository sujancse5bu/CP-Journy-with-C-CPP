/* Program Name: Logic Gate Simulator */

#include <iostream>
using namespace std;

int go;
bool bool_1, bool_2;

void  ASK()
{
	cout << "\n\n\n\tThis is the Logic Gate Simulator !!!"; 
	cout << "\n\n\n\tThere are total 7 operations to perform :::";
	cout << "\n\n\t01. OR Operation";
	cout << "\n\t02. AND Operation";
	cout << "\n\t03. NOT Operation";
	cout << "\n\t04. NAND Operation";
	cout << "\n\t05. NOR Operation";
	cout << "\n\t06. X-OR Operation";
	cout << "\n\t07. X-NOR Operation";
	cout << "\n\n\tWhich one do you want to perform? ";
	cin >> go;
}

void Two_Input(string s)
{
	cout << "\n\n\n\t" << s << " Operation :::";
	cout << "\n\n\tEnter two boolean numbers : ";
	cin >> bool_1 >> bool_2;
	cout << "\n\n\t" << s << " Operation between " << bool_1 << " and " << bool_2 << " is ";
}

void One_Input(string s)
{
	cout << "\n\n\n\t-> " << s << " Operation :::";
	cout << "\n\n\tEnter one boolean number : ";
	cin >> bool_1;
	cout << "\n\n\t" << s << " Operation of " << bool_1 << " is ";
}

bool OR(bool bool_1, bool bool_2) // Function - 01
{
	if(!bool_1 && !bool_2) return 0;
	else return 1;
}

bool AND(bool bool_1, bool bool_2) // Function - 02
{
	if(bool_1 && bool_2) return 1;
	else return 0;
} 

bool NOT(bool bool_1) // Function - 03
{
	if(!bool_1) return 1;
	else return 0;
}

bool NAND(bool bool_1, bool bool_2) // Function - 04
{
	return (NOT(AND(bool_1, bool_2)));
} 

bool NOR(bool bool_1, bool bool_2) // Function - 05
{
	return (NOT(OR(bool_1, bool_2)));
} 

bool XOR(bool bool_1, bool bool_2) // Function - 06
{
	if(bool_1 == bool_2) return 0;
	else return 1;
}

bool XNOR(bool bool_1, bool bool_2) // Function - 07
{
	return (NOT(XOR(bool_1, bool_2)));
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		Two_Input("OR");
		cout << OR(bool_1, bool_2) << "\n\n\n";
	}
	else if(go == 2)
	{
		Two_Input("AND");
		cout << AND(bool_1, bool_2) << "\n\n\n";
	}
	else if(go == 3)
	{
		One_Input("NOT");
		cout << NOT(bool_1) << "\n\n\n";
	}
	else if(go == 4)
	{
		Two_Input("NAND");
		cout << NAND(bool_1, bool_2) << "\n\n\n";
	}
	else if(go == 5)
	{
		Two_Input("NOR");
		cout << NOR(bool_1, bool_2) << "\n\n\n";
	}
	else if(go == 6)
	{
		Two_Input("X-OR");
		cout << XOR(bool_1, bool_2) << "\n\n\n";
	}
	else
	{
		Two_Input("X-NOR");
		cout << XNOR(bool_1, bool_2) << "\n\n\n";
	}
	
	return 0;
}
