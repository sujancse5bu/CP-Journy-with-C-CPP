#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,k,lm,n,s;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    k=max(n,m);
    lli a[m][n],b[n][m],c[k][k];
    cout<<" Enter the first matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++)
    {
    	cout<<"   ";
    	 for (j=0;j<n;j++) cin>>a[i][j];
	}
    cout<<" Enter the second matrix of "<<n<<'x'<<m<<" order"<<':'<<endl;
    for (i=0;i<m;i++)
    {
    	cout<<"   ";
    	for (j=0;j<n;j++) cin>>b[i][j];
	}
    cout<<" Multiplicational result:"<<endl;
    
    for (i=0;i<m;i++)
    {
    	for (j=0;j<n;j++)
    	{
    		s=0;
    		for (l=0;l<n;l++)
	    	{
	    		for (k=0;k<m;k++)
	    		{
	    			
				}
			}
		}
        
    }
}
