/* Program Name: Set Operations */

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int go;
set <string> set_A, set_B, set_U, set_Uni, set_Int;
set <string> :: iterator it, it1;

void ASK()
{
	cout << "\n\n\n\tThis is the Set Operation Package !!!";
	cout << "\n\n\tThere are total 6 operations to perform :::";
	cout << "\n\n\t01. Power Set";
	cout << "\n\t02. Set Union";
	cout << "\n\t03. Set Intersection";
	cout << "\n\t04. Set Difference";
	cout << "\n\t05. Cartesian Product";
	cout << "\n\t06. De-Morgan Law Proof";
	cout << "\n\n\tWhich one do you want to perform? ";
	cin >> go;	
}

set <string> Set_Input(string s)
{
	set <string> new_set;
	cout << "\n\n\tHow many elements will be on " << s << " set? ";
	int n;
	cin >> n;
	cout << "\n\n\tThe " << n << " elements are : ";
	for(int i = 0; i < n; i++)
	{
		string s1;
		cin >> s1;
		new_set.insert(s1);
	}
	
	return new_set;	
}

void Power_Set(set <string> set_A) // Function - 01
{
	cout << "\n\n\tPower set of A is ::: ";
	cout << "\n\n\t{";
	for(int i = 0; i < (1 << set_A.size()); i++)
	{
		int plus = 0;
		set <string> new_set;
		for(it = set_A.begin(); it != set_A.end(); it++)
		{
			if(i & (1 << plus))
			{
				new_set.insert(*it);
			}
			plus++;
		}
		cout << '{';
		plus = 0;
		for(it = new_set.begin(); it != new_set.end(); it++)
		{
			plus == new_set.size() - 1 ? cout << *it : cout << *it << ", ";
			plus++;
		}
		cout << '}';
		if(i != (1 << set_A.size()) - 1) cout << ", ";	
	}
	cout << '}';
}

set <string> Set_Union(set <string> set_A, set <string> set_B) // Function - 02
{
	set <string> new_set;
	for(it = set_A.begin(); it != set_A.end(); it++)
	{
		new_set.insert(*it);
	}
	for(it = set_B.begin(); it != set_B.end(); it++)
	{
		if(new_set.find(*it) == new_set.end()) new_set.insert(*it);
	}
	
	return new_set;
}

set <string> Set_Intersection(set <string> set_A, set <string> set_B) // Function - 03
{
	set <string> new_set;
	for(it = set_A.begin(); it != set_A.end(); it++)
	{
		if(set_B.find(*it) != set_B.end()) new_set.insert(*it);
	}
	
	return new_set;
}

set <string> Set_Difference(set <string> set_A, set <string> set_B) // Function - 04
{
	set <string> new_set;
	for(it = set_A.begin(); it != set_A.end(); it++)
	{
		if(set_B.find(*it) == set_B.end()) new_set.insert(*it);
	}
	
	return new_set;
}

void Cartesian_Product(set <string> set_A, set <string> set_B) // Function - 05
{
	int plus = 0, plus_1 = 0; 
	for(it = set_A.begin(); it != set_A.end(); it++)
	{
		plus_1 = 0;
		for(it1 = set_B.begin(); it1 != set_B.end(); it1++)
		{
			cout << '(' << *it << ", " << *it1 << ')';
			if(!(plus == set_A.size() - 1 && plus_1 == set_B.size() - 1)) cout << ", ";
			plus_1++;
		}
		plus++;
	}
}

void De_Morgan_Law_Proof(set <string> set_U, set <string> set_A, set <string> set_B) // Function - 06
{
	set <string> new_set, new_set_1;
	set_Uni = Set_Union(set_A, set_B);
	new_set = Set_Difference(set_U, set_Uni);
	set_Int = Set_Intersection(set_A, set_B);
	new_set_1 = Set_Difference(set_U, set_Int);
	cout << "\n\n\n\tFor the First Law :::";
	for(int i = 0; i < 2; i++)
	{
		!i ? cout << "\n\n\tL.H.S = {" : cout << "\n\tR.H.S = {";
		int plus = 0;
		for(it = new_set.begin(); it != new_set.end(); it++)
		{
			cout << *it;
			if(plus != new_set.size() - 1) cout << ", ";
			plus++;
		}
		cout << '}';
	}
	cout << "\n\n\t[Proved]";
	cout << "\n\n\n\tFor the Second Law :::";
	for(int i = 0; i < 2; i++)
	{
		!i ? cout << "\n\n\tL.H.S = {" : cout << "\n\tR.H.S = {";
		int plus = 0;
		for(it = new_set_1.begin(); it != new_set_1.end(); it++)
		{
			cout << *it;
			if(plus != new_set_1.size() - 1) cout << ", ";
			plus++;
		}
		cout << '}';
	}
	cout << "\n\n\t[Proved]";
}

int main ()
{
	ASK();
	system("cls");
	if(go == 1)
	{
		cout << "\n\n\n\tPower Set :::";
		set_A = Set_Input("A");
		Power_Set(set_A);
	}
	else if(go == 2)
	{
		cout << "\n\n\n\tSet Union :::";
		set_A = Set_Input("A");
		set_B = Set_Input("B");
		set <string> new_set = Set_Union(set_A, set_B);
		cout << "\n\n\tA Union B is ::: ";
		cout << "\n\n\t{";
		int plus = 0;
		for(it = new_set.begin(); it != new_set.end(); it++)
		{
			plus == new_set.size() - 1 ? cout << *it : cout << *it << ", ";
			plus++;
		}
		cout << '}';
	}
	else if(go == 3)
	{
		cout << "\n\n\n\tSet Intersection :::";
		set_A = Set_Input("A");
		set_B = Set_Input("B");
		set <string> new_set = Set_Intersection(set_A, set_B);
		cout << "\n\n\tA Intersection B is ::: ";
		cout << "\n\n\t{";
		int plus = 0;
		for(it = new_set.begin(); it != new_set.end(); it++)
		{
			plus == new_set.size() - 1 ? cout << *it : cout << *it << ", ";
			plus++;
		}
		cout << '}';
	}
	else if(go == 4)
	{
		cout << "\n\n\n\tSet Difference :::";
		set_A = Set_Input("A");
		set_B = Set_Input("B");
		set <string> new_set = Set_Difference(set_A, set_B);
		cout << "\n\n\tA - B is ::: ";
		cout << "\n\n\t{";
		int plus = 0;
		for(it = new_set.begin(); it != new_set.end(); it++)
		{
			plus == new_set.size() - 1 ? cout << *it : cout << *it << ", ";
			plus++;
		}
		cout << '}';
	}
	else if(go == 5)
	{
		cout << "\n\n\n\tCartesian Product :::";
		set_A = Set_Input("A");
		set_B = Set_Input("B");
		cout << "\n\n\tA X B is ::: ";
		cout << "\n\n\t{";
		Cartesian_Product(set_A, set_B);
		cout << '}';
	}
	else
	{
		cout << "\n\n\n\tDe Morgan Law :::";
		cout << "\n\n\t01. (A Union B)` = A` Intersection B`";
		cout << "\n\t02. (A Intersection B)` = A` Union B`";
		set_U = Set_Input("U");
		set_A = Set_Input("A");
		set_B = Set_Input("B");
		De_Morgan_Law_Proof(set_U, set_A, set_B);
	}
	
	return 0;
}
