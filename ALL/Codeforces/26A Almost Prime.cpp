/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
bool isprime(lli n) // This function returns 1 if the number is prime otherwise returns 0
{
	if (n==1) return 0;
	else if (n==2 || n==3) return 1;
	else if (n%2==0||n%3==0) return 0;
	else
	{
		lli i=5;
		while (i*i<=n)
		{
			if(n%i==0 || n%(i+2)==0) return 0;
			i+=6;
		}
		return 1;
	}
}

int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,n,m,b,k=0,c[2000];
    cin>>n;
    for (i=6;i<=n;i++,b=0)
    {
        for (j=2,b=0;j<i;j++) if (i%j==0 && isprime(j)==1)
        {
            c[b]=j;
            b++;
        }
        for (j=0,m=1;j<b-1;j++) if (c[j]!=c[j+1]) m++;
        if (m==2) k++;
    }
    cout<<k<<endl;
    return 0;
}

