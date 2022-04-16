/* Program Name: Number Theory and Big Integer Package */

#include <bits/stdc++.h>
using namespace std;

int go, chk1 = 0;

void ASK()
{
	cout << "\n\n\n\tThis is the Number Theory and Big Integer Package !!!";
	cout << "\n\n\tThere are total 4 options to perform.";
	cout << "\n\n\t01. Prime Number Checking";
	cout << "\n\t02. Big Integer Addition";
	cout << "\n\t03. Big Integer Subtraction";
	cout << "\n\t04. Big Integer Multiplication";
	cout << "\n\n\tWhich option do you want to perform? ";
	cin >> go;
}

bool IsPrime(int n) // Function - 01
{
	if(n == 2) return 1;
	else if(!(n % 2)) return 0;
	for(int i = 3; i * i <= n; i += 2)
	{
		if(!(n % i)) return 0;
	}
	
	return 1;
}

string BigIntegerAddition(string s, string s1) // Function - 02
{
	string s2, s3;
	if(s.size() < s1.size()) swap(s, s1);
	s2 = s1;
	for(int i = 1; i <= s.size() - s2.size(); i++)
	{
		s1 = "0" + s1;
	}
	int car = 0;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		int a = (int) s[i] - 48, b = (int) s1[i] - 48;
		if(i != 0)
		{
			int c = a + b + car;
			if(c >= 10) car = 1;
			else car = 0;
			c = (c % 10) + 48;
			s3.push_back((char) c);
		}
		else
		{
			int c = a + b + car;
			int d = (c % 10) + 48;
			s3.push_back((char) d);
			d = (c / 10) + 48;
			s3.push_back((char) d);
		}
	}
	string s4;
	int chk = 0;
	for(int i = s3.size() - 1; i >= 0; i--)
	{
		if(s3[i] > '0') chk = 1;
		if(chk) s4.push_back(s3[i]);
	}
	
	return s4;
}
 
 
string BigIntegerSubtraction(string s, string s1) // Function - 03
{
	string s2, s3;
	if(s.size() < s1.size())
	{
		s2 = s;
		for(int i = 1; i <= s1.size() - s2.size(); i++)
		{
			s = "0" + s;
		}
	}
	else
	{
		s2 = s1;
		for(int i = 1; i <= s.size() - s2.size(); i++)
		{
			s1 = "0" + s1;
		}
	}
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] > s1[i])
		{
			break;
		}
		else if(s[i] < s1[i])
		{
			chk1 = 1;
			swap(s, s1);
			break;
		}
	}
	int car = 0;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		int a = (int) s[i] - 48, b = (int) s1[i] - 48 + car;
		if(a < b) b = ((a + 10) - b) + 48, car = 1, s3.push_back((char) b);
		else b = (a - b) + 48, car = 0, s3.push_back((char) b);
	}
	string s4;
	int chk = 0;
	for(int i = s3.size() - 1; i >= 0; i--)
	{
		if(s3[i] > '0') chk = 1;
		if(chk) s4.push_back(s3[i]);
	}
	
	return s4;	
}

string BigIntegerMultiplication(string s, string s1) // Function - 04
{
	string s2, s5;
	for(int i = s1.size() - 1; i >= 0; i--)
	{
		int a = (int) s1[i] - 48;
		for(int j = 1; j <= (s1.size() - 1 - i); j++)
		{
			s2.push_back('0');
		}
		int car = 0;
		for(int j = s.size() - 1; j >= 0; j--)
		{
			int b = (int) s[j] - 48;
			int c = (b * a) + car;
			if(!j)
			{
				int d = (c % 10) + 48;
				s2.push_back((char) d);
				d = (c / 10)  + 48;
				s2.push_back((char) d);
			}
			else
			{
				int d = (c % 10) + 48;
				car = c / 10;
				s2.push_back((char) d);
			}
		}
		reverse(s2.begin(), s2.end());
		if(i == s1.size() - 1) s5 = s2;
		else s5 = BigIntegerAddition(s5, s2); 
		s2.clear();
	}
	
	return s5;
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tPrime Number Checking :::";
		cout << "\n\n\n\tEnter a positive integer: ";
		int n;
		cin >> n;
		if(IsPrime(n)) cout << "\n\n\t" << n << " is a prime number.";
		else cout << "\n\n\t" << n << " is not a prime number."; 
	}
	else if(go == 2)
	{
		string s, s1, s2;
		cout << "\n\n\n\tBig Integer Addition :::";
		cout << "\n\n\n\tEnter two integers: ";
		cin >> s >> s1;
		s2 = BigIntegerAddition(s, s1);
		cout << "\n\n\tThe result is: " << s2 << endl;
	}
	else if(go == 3)
	{
		string s, s1, s2;
		cout << "\n\n\n\tBig Integer Subtraction :::";
		cout << "\n\n\n\tEnter two integers: ";
		cin >> s >> s1;
		s2 = BigIntegerSubtraction(s, s1);
		if(!s2.size()) s2 = "0";
		cout << "\n\n\tThe result is: ";
		if(chk1) cout << '-' << s2 << endl;
		else cout << s2 << endl;
	}
	else
	{
		string s, s1, s2;
		cout << "\n\n\n\tBig Integer Multiplication :::";
		cout << "\n\n\n\tEnter two integers: ";
		cin >> s >> s1;
		s2 = BigIntegerMultiplication(s, s1);
		cout << "\n\n\tThe result is: " << s2 << endl;
	}
	
	return 0;
}
