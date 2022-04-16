/* Program Name: Recursive Package */

#include <iostream>
using namespace std;

int go;

void ASK()
{
	cout << "\n\n\n\tWelcome to the Recursive Package !!!";
	cout << "\n\n\tThere are total 6 problems here.";
	cout << "\n\n\t01. Factorial of a Number";
	cout << "\n\t02. N-th Fibonacci Number";
	cout << "\n\t03. N-th Even Number";
	cout << "\n\t04. N-th Odd Number";
	cout << "\n\t05. N-th Element of a Geometric Progression";
	cout << "\n\t06. Summation of First N elements of a Geometric Progression";
	cout << "\n\n\tWhich operation do you want to perform? ";
	cin >> go;
}

int Factorial(int n) // Function - 01
{
	if(n == 0) return 1;
	else return n * Factorial(n - 1);
}

int Fibonacci(int n) // Function - 02
{
	if(n <= 1) return n;
	else return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int Even(int n, int even, int cnt) // Function - 03
{
	if(n == cnt) return even;
	else return (Even(n, even + 2, cnt + 1));
}

int Odd(int n, int odd, int cnt) // Function - 04
{
	if(n == cnt) return odd;
	else return (Even(n, odd + 2, cnt + 1));
}

int Geo_Element(int a, int r, int n, int cnt) // Function - 05
{
	if(n == cnt) return a;
	else return (Geo_Element(a * r, r, n, cnt + 1));
}

int Geo_Sum(int a, int r, int n, int cnt, int sum) // Function - 06
{
	sum += a;
	if(n == cnt) return sum;
	else return (Geo_Sum(a * r, r, n, cnt + 1, sum));
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tFactorial of a Number :::";
		cout << "\n\n\tEnter a positive integer : ";
		int n;
		cin >> n;
		cout << "\n\n\tFactorial of " << n  << " is " << Factorial(n) << endl;
	}
	else if(go == 2)
	{
		cout << "\n\n\n\tN-th Fibonacci Number :::";
		cout << "\n\n\tEnter a positive integer : ";
		int n;
		cin >> n;
		cout << "\n\n\tFibonacci Number at postion " << n << " is " << Fibonacci(n - 1) << endl;
	}
	else if(go == 3)
	{
		cout << "\n\n\n\tN-th Even Number :::";
		cout << "\n\n\tEnter a positive integer : ";
		int n;
		cin >> n;
		cout << "\n\n\tEven Number at position " << n << " is " << Even(n, 0, 1) << endl;
	}
	else if(go == 4)
	{
		cout << "\n\n\n\tN-th Odd Number :::";
		cout << "\n\n\tEnter a positive integer : ";
		int n;
		cin >> n;
		cout << "\n\n\tOdd Number at position " << n << " is " << Odd(n, 1, 1) << endl;
	}
	else if(go == 5)
	{
		cout << "\n\n\n\tN-th Element of a Geometric Progression :::";
		cout << "\n\n\tEnter the initial value (a positive integer), a = ";
		int a;
		cin >> a;
		cout << "\n\tEnter the common ratio (a positive integer), r (r > 1) = ";
		int r;
		cin >> r;
		int n;
		cout << "\n\tEnter the position of the element you want to find (a positive integer), n = ";
		cin >> n;
		cout << "\n\n\tElement at position " << n << " in that geometric progression is " << Geo_Element(a, r, n, 1);
	}
	else
	{
		cout << "\n\n\n\tSummation of First N elements of a Geometric Progression ::: ";
		cout << "\n\n\tEnter the initial value (a positive integer), a = ";
		int a;
		cin >> a;
		cout << "\n\tEnter the common ratio (a positive integer), r (r > 1) = ";
		int r;
		cin >> r;
		int n;
		cout << "\n\tEnter the position of the element you want to find (a positive integer), n = ";
		cin >> n;
		cout << "\n\n\tSummation of the first " << n << " elements in that geometric progression is " << Geo_Sum(a, r, n, 1, 0);
	}
	
	return 0;
}
