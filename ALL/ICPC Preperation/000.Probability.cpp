/* Prohram Name: Probability Package (Bayes' Theorem) */

#include <iostream>
using namespace std;

double P_A, P_B, P_A_Given_B, P_B_Given_A;
int go;

void ASK()
{
	cout << "\n\n\n\tWelcome to Probability Package (Bayes' Theorem) !!!";
	cout << "\n\n\tThere're total 4 options.";
	cout << "\n\n\n\t01. P(A)";
	cout << "\n\t02. P(B)";
	cout << "\n\t03. P(A | B)";
	cout << "\n\t04. P(B | A)";
	cout << "\n\n\tWhich value do you want to calculate? ";
	cin >> go;
}

void ASK_01()
{
	cout << "\n\tEnter the value of P(A) = ";
	cin >> P_A;
}

void ASK_02()
{
	cout << "\n\tEnter the value of P(B) = ";
	cin >> P_B;
}

void ASK_03()
{
	cout << "\n\tEnter the value of P(A | B) = ";
	cin >> P_A_Given_B;
}

void ASK_04()
{
	cout << "\n\tEnter the value of P(B | A) = ";
	cin >> P_B_Given_A;
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tP(A) = ? ";
		cout << "\n\n";
		ASK_02();
		ASK_03();
		ASK_04();
		double a = (P_A_Given_B * P_B) / (P_B_Given_A * 1.00);
		cout << "\n\n\n\t" << "P(A) = " << a << endl;	
		
	}
	else if(go == 2)
	{
		cout << "\n\n\n\tP(B) = ? ";
		cout << "\n\n";
		ASK_01();
		ASK_03();
		ASK_04();
		double a = (P_B_Given_A * P_A) / (P_A_Given_B * 1.00);
		cout << "\n\n\n\t" << "P(B) = " << a << endl;
	}
	else if(go == 3)
	{
		cout << "\n\n\n\tP(A | B) = ? ";
		cout << "\n\n";
		ASK_01();
		ASK_02();
		ASK_04();
		double a = (P_B_Given_A * P_B) / (P_A * 1.00);
		cout << "\n\n\n\t" << "P(A | B) = " << a << endl;
	}
	else
	{
		cout << "\n\n\n\tP(B | A) = ? ";
		cout << "\n\n";
		ASK_01();
		ASK_02();
		ASK_03();
		double a = (P_A_Given_B * P_A) / (P_B * 1.00);
		cout << "\n\n\n\t" << "P(B | A) = " << a << endl;
	}
	
	return 0;
}
