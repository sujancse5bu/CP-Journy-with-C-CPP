/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
void cl();
void flr();
void rndu();
void abss();
void pwr();
int main ()
{
	lli i;
	bll:
    cout << "\n   Package of Mini Functions."; 
	cout << "\n\n    1.Ceil";
	cout << "\n    2.Floor";
	cout << "\n    3.Round Up";
	cout << "\n    4.Absolute value";
	cout << "\n    5.Power";
	cout << "\n\n    Pleace enter an index from above:";
	
	cin>>i;
	if (i==1) cl();
	else if (i==2) flr();
	else if (i==3) rndu();
	else if (i==4) abss();
	else if (i==5) pwr();       
	else
	{
		cout<<"    Invalid Selection.";
		cout << "\n\n    Pleace enter again:";
		goto bll;
	}
	cout<<"       Thanks."<<endl<<endl;
    return 0;
}
void cl()
{
	cout<<"\n\n    Ceil Function:-"<<endl;
	cout<<"\n\n    Enter a double Number: ";
	double d,g;
	lli f,e;
	cin>>d;
	f=d;
	if (d>0.0000000) 
	{
		e=d;
		g=(d-e);
		if (g>0.00) f++;
	}
	cout<<"\n    The answer: "<<f<<endl;
}
void flr()
{
	cout<<"\n\n    Floor Function:-"<<endl;
	cout<<"\n\n    Enter a double Number: ";
	double d,g;
	lli f,e;
	cin>>d;
	f=d;
	if (d<0.0000000) 
	{
		e=d;
		g=(d-e);
		if (g>0.00) f--;
	}
	cout<<"\n    The answer: "<<f<<endl;
}
void rndu()
{
	cout<<"\n\n    Round Function:-"<<endl;
	cout<<"\n\n    Enter a double Number: ";
	double d,g;
	lli f,e;
	cin>>d;
	f=d;
	g=(d-f);
	g*=10;
	e=g;
	if (e>4) f++;
	cout<<"\n    The answer: "<<f<<endl;
}
void abss()
{
	cout<<"\n\n    Absulute value Function:-"<<endl;
	cout<<"\n    Enter a Integer Number: ";
	lli e;
	cin>>e;
	if (e<0) e=-e;
	cout<<"\n\n    Absulute value:"<<e<<endl;
}
void pwr()
{
	cout<<"\n\n  Power Function:";
	cout<<"\nPlease enter the base:";
	lli i,k=1,l;
	cin>>i;
	cout<<"\nPlease enter the power:";
	cin>>l;
	while(l--)
	{
		k*=i;
	}
	cout<<"\n    The answer: "<<k<<endl;
}
