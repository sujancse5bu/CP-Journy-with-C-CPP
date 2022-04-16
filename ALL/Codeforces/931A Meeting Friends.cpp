#include<stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,a,b;
	cin>>a>>b;
	m= abs (a-b);
	if (m%2==0) a=(m/2*(m/2+1));
	else a=(m/2*(m/2+1))+(m/2+1);
	cout<<a<<endl;
	return 0;
}
