#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main ()
{
	lli i,j,k,l,m,n,b,v,c,x,y,z;
	cout<<endl<<"  Adjacency Matrix & List"<<endl<<endl;
	cout<<"  Please enter the number of vertex:";
	cin>>n;
	bool a[n+1][n+1]={0};
	vector <lli> xx[n+1];
	cout<<"  Please enter the number of edge:";
	cin>>m;
	cout<<"  Please enter the number of "<<m<<" connected vertex:"<<endl;
	for (i=0;i<m;i++)
	{
		cout<<"   ";
		cin>>x>>y;
		xx[x].push_back(y);
		xx[y].push_back(x);
		a[x][y]=1;
		a[y][x]=1;
	}
	cout<<endl<<"  The Adjacency Matrix"<<endl<<endl;
	cout<<"     ";
	for (i=0;i<n;i++) cout<<i+1<<"  ";
	cout<<endl;
	for (i=1;i<=n;i++)
	{
		cout<<"  "<<i<<"  ";
		for (j=1;j<=n;j++) cout<<a[i][j]<<"  ";
		cout<<endl;
	}
	cout<<endl<<"  The Adjacency List"<<endl<<endl;
	for (i=1;i<=n;i++)
	{
		b=xx[i].size();
		cout<<"  "<<i<<">> ";
		for (j=0;j<b;j++) cout<<xx[i][j]<<" ";
		cout<<endl;
	}
	cout<<"    Thanks."<<endl;
	return 0;
}
