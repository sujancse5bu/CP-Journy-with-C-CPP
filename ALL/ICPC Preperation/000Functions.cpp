/** Program Name: Mini Functions' Package **/

#include <bits/stdc++.h>
using namespace std;

int go;

void ASK()
{
	cout << "\n\n\n\tThis is the Mini Functions' Package !!!";
	cout << "\n\n\tThere are total 5 operations to perform.";
	cout << "\n\n\n\t01. Ceil Function";
	cout << "\n\t02. Floor Function";
	cout << "\n\t03. Round Up Function";
	cout << "\n\t04. Absolute Function";
	cout << "\n\t05. Power Function";
	cout << "\n\n\tWhich operation do you want to perform? ";
	cin >> go;
}

string Ceiling(int point, string s) // Function - 01
{
	string s1;
	int car = 0;
	for(int i = point - 1; i >= 0; i--)
	{
		int a = (int) s[i] - 48;
		if(i == point - 1) a = a + 1 + car;
		else a = a + car;
		int b = (a % 10) + 48;
		car = a / 10;
		s1.push_back((char) b);
		if(i == 0 && a > 9)
		{
			s1.push_back('1');
		}
	}
	reverse(s1.begin(), s1.end());
	
	return s1;
}

string Floor(int point, string s) // Function - 02
{
	string s1;
	for(int i = point - 1; i >= 0; i--)
	{
		s1.push_back(s[i]);
	}
	reverse(s1.begin(), s1.end());
	
	return s1;
}

string RoundUp(int point, int pos, string s) // Function - 03
{
	string s1;
	int plus = 0;
	if(s[point + pos + 1] >= '5') plus = 1;
	int car = 0;
	for(int i = point + pos; i >= 0; i--)
	{
		if(s[i] == '.') s1.push_back('.');
		else
		{
			int a = (int) s[i] - 48;
			if(i == point + pos) a = a + plus;
			else a = a + car;
			int b = (a % 10) + 48;
			car = a / 10;
			s1.push_back((char) b);
			if(i == 0 && a > 9)
			{
				s1.push_back('1');
			}
		}
	}
	reverse(s1.begin(), s1.end());
	
	return s1;
}

int Absolute(int n) // Function - 04
{
	if(n < 0) return n * -1;
	else return n;
}

int Power(int base, int power) // Function - 05
{
	int prod = 1;
	for(int i = 1; i <= power; i++)
	{
		prod *= base;
	}
	
	return prod;
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tCeiling Function :::";
		cout << "\n\n\tEnter a positive Real Number: ";
		string s;
		cin >> s;
		int point = s.size();
		for(int i = 0; i < s[i] != '\0'; i++)
		{
			if(s[i] == '.')
			{
				point = i;
				break;
			}
		}
		string s1 = Ceiling(point, s);
		cout << "\n\n\tCeiling of " << s << " is: " << s1 << endl; 
	}
	else if(go == 2)
	{
		cout << "\n\n\n\tFloor Function :::";
		cout << "\n\n\tEnter a positive Real Number: ";
		string s;
		cin >> s;
		int point = s.size();
		for(int i = 0; i < s[i] != '\0'; i++)
		{
			if(s[i] == '.')
			{
				point = i;
				break;
			}
		}
		string s1 = Floor(point, s);
		cout << "\n\n\tFloor of " << s << " is: " << s1 << endl; 
	}
	else if(go == 3)
	{
		cout << "\n\n\n\tRound Up Function :::";
		cout << "\n\n\tEnter a positive Real Number: ";
		string s;
		cin >> s;
		cout << "\n\n\tAfter the decimal point, which position do you want to round up? ";
		int pos;
		cin >> pos;
		int point = s.size();
		for(int i = 0; i < s[i] != '\0'; i++)
		{
			if(s[i] == '.')
			{
				point = i;
				break;
			}
		}
		string s1 = RoundUp(point, pos, s);
		cout << "\n\n\tRound Up of " << s << " at position " << pos << " after decimal point: " << s1 << endl; 
		
	}
	else if(go == 4)
	{
		cout << "\n\n\n\tAbsolute Function ::: ";
		cout << "\n\n\tEnter an integer: ";
		int n;
		cin >> n;
		cout << "\n\n\tAbsolute value of " << n << " is: " << Absolute(n) << endl;
	}
	else
	{
		cout << "\n\n\n\tPower Function :::";
		cout << "\n\n\tEnter the base [A positive integer]: ";
		int base;
		cin >> base;
		cout << "\n\n\tEnter the power [A positive integer]: ";
		int power;
		cin >> power;
		cout << "\n\n\n\t" << base << " to the power " << power << " = " << Power(base, power) << endl;
	}
	
	return 0;
}
