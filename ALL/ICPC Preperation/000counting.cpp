/* Program Name: Counting Package */

#include <bits/stdc++.h>
using namespace std;

int go, elements, elements_1;
vector <string> v;
int arr[1000][1000];
string s;

void ASK()
{
	cout << "\n\n\n\tThis is the Counting Package ::: ";
	cout << "\n\n\tThere are total 4 operations to perform.";
	cout << "\n\n\n\t01. Permutation of a String";
	cout << "\n\t02. Combination of a Set";
	cout << "\n\t03. Pascal Triangle";
	cout << "\n\n\n\tWhich operation do you want to perform? ";
	cin >> go;	
}

void Permutation(string s, int l, int r)
{
	if(l == r)
	{
		cout << "\n\t" << s;
	}
	else
	{
		for(int i = l; i <= r; i++)
		{
			swap(s[l], s[r]);
			Permutation(s, l + 1, r);
			swap(s[l], s[i]);
		}
	}
}

void Combination()
{
	vector <string> v1;
	for(int i = 0; i < (1 << v.size()); i++)
	{
		for(int j = 0; j < v.size(); j++)
		{
			if(i & (1 << j))
			{
				v1.push_back(v[j]);
			}
		}
		if(v1.size() == elements_1)
		{
			cout << "\n\t";
			for(int i = 0; i < v1.size(); i++)
			{
				cout << v1[i] << ' ';
			}
		}
		v1.clear();
	}
}

void Pascal_Triangle()
{
	for(int i = 0; i < elements; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for(int i = 0; i < elements; i++)
	{
		cout << "\n\t";
		for(int j = 0; j <= i; j++)
		{
			cout << arr[i][j] << ' ';
		}
	}
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tPermutation of a String :::";
		cout << "\n\n\n\tHow many elements will be on the string? ";
		cin >> elements;
		cout << "\n\n\tThe string is: ";
		cin >> s;
		cout << "\n\n\n\tAll possible permutations of the string are: ";
		cout << "\n\n\t";
		Permutation(s, 0, elements - 1);
	}
	else if(go == 2)
	{
		cout << "\n\n\n\tCombination of a Set :::";
		cout << "\n\n\n\tHow many elements will be on the set? ";
		cin >> elements;
		cout << "\n\n\tThe elements are: ";
		for(int i = 0; i < elements; i++)
		{
			string s;
			cin >> s;
			v.push_back(s);
		}
		cout << "\n\n\tHow many elements do you want to take each time to combine these elements? ";
		cin >> elements_1;
		cout << "\n\n\n\tAll possible combinations taking " << elements_1 << " elements are: ";
		cout << "\n\n";
		Combination(); 
	}
	else
	{
		cout << "\n\n\n\tPascal Triangle :::";
		cout << "\n\n\tTo which row do you want to print the pascal triangle? ";
		cin >> elements;
		cout << "\n\n";
		Pascal_Triangle();
	}
	
	return 0;
}
