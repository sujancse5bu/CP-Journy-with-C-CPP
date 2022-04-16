#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli add ();
lli sub ();
lli trn ();
lli mul ();
lli dsm ();
lli rsm ();
lli csm ();
lli rvs ();
int main ()
{
	lli i,j,k,l,m=0,n=0,x,y,z;
	cout<<endl<<"    Matrix Operation."<<endl;
	cout<<" 1.Addition."<<endl;
	cout<<" 2.Subtraction."<<endl;
	cout<<" 3.Transpose."<<endl;
	cout<<" 4.Multiplication."<<endl;
	cout<<" 5.Diagonal Sum."<<endl;
	cout<<" 6.Row Sum."<<endl;
	cout<<" 7.Column Sum."<<endl;
	cout<<" 8.Reverse."<<endl<<endl;
	ssss:
	cout<<" Please enter a number to select: ";
	cin>>i;
	cout<<endl;
	if (i==1) add();
    else if (i==2) sub ();
    else if (i==3) trn ();
    else if (i==4) mul ();
    else if (i==5) dsm ();
    else if (i==6) rsm ();
    else if (i==7) csm ();
    else if (i==8) rvs ();
    else
    {
        cout<<"  Invalid selection."<<endl;
        goto ssss;
    }
	return 0;
}
lli add ()
{
    lli i,j,m,n,d,f,g,h;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    lli a[m][n];
    cout<<" Enter the first Matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<n;j++) cin>>a[i][j];
	}
    cout<<" Enter the second Matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<n;j++)
	    {
	        cin>>d;
	        a[i][j]+=d;
	    }
	}
    cout<<" Additional result:"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
    cout<<"       Thanks."<<endl;
}
lli sub ()
{
    lli i,j,m,n,d,f,g,h;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    lli a[m][n];
    cout<<" Enter the first Matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<n;j++) cin>>a[i][j];
	}
    cout<<" Enter the second Matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<n;j++)
	    {
	        cin>>d;
	        a[i][j]-=d;
	    }
	}
    cout<<" Subtractional result:"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
    cout<<"       Thanks."<<endl;
}
lli trn ()
{
    lli i,j,m,n,d,f,g,h;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    lli a[m][n];
    cout<<" Enter the Matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<n;j++) cin>>a[i][j];
	}
    cout<<" Transpose matrix:"<<endl;
    for (j=0;j<n;j++)
    {
        for (i=0;i<m;i++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
    cout<<"       Thanks."<<endl;
}
lli dsm ()
{
    lli i,j,m,n=0,d,f=0,g,h;
    cout<<endl<<" Enter the number of row & column: ";
    cin>>m;
    cout<<" Enter the matrix of "<<m<<'x'<<m<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
    {
    	cout<<"   ";
    	for (j=0;j<m;j++)
	    {
	        cin>>d;
	        if (i==j) n+=d;
	        if (i+j==m-1) f+=d;
	    }
	}
    cout<<" Sum of diagonal "<<n<<" and "<<f<<" ."<<endl;
    cout<<"       Thanks."<<endl;
}
lli rsm ()
{
	lli i,j,m,n,d,f,g,h;
	cout<<" Sum of row."<<endl<<endl;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    lli a[m]={0};
    cout<<" Enter the matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
	{
		cout<<"   ";
		for (j=0;j<n;j++) 
		{
			cin>>d;
			a[i]+=d;
		}
	}
    for (i=0;i<m;i++)
    {
    	cout<<"  Sum of ";
    	if ((i+1)/10) cout<<(i+1)/10;
    	if ((i+1)%10==1) cout<<(i+1)%10<<"st row= "<<a[i]<<'.'<<endl;
    	else if ((i+1)%10==2) cout<<(i+1)%10<<"nd row= "<<a[i]<<'.'<<endl;
    	else if ((i+1)%10==3) cout<<(i+1)%10<<"rd row= "<<a[i]<<'.'<<endl;
    	else cout<<(i+1)%10<<"th row= "<<a[i]<<'.'<<endl;
	}
    cout<<"       Thanks."<<endl;
}
lli csm ()
{
	lli i,j,m,n,d,f,g,h;
	cout<<" Sum of Column."<<endl<<endl;
    cout<<endl<<" Enter the number of row: ";
    cin>>m;
    cout<<" Enter the number of column: ";
    cin>>n;
    lli a[n]={0};
    cout<<" Enter the matrix of "<<m<<'x'<<n<<" order"<<':'<<endl;
    for (i=0;i<m;i++) 
	{
		cout<<"   ";
		for (j=0;j<n;j++) 
		{
			cin>>d;
			a[j]+=d;
		}
	}
    for (i=0;i<m;i++)
    {
    	cout<<"  Sum of ";
    	if ((i+1)/10) cout<<(i+1)/10;
    	if ((i+1)%10==1) cout<<(i+1)%10<<"st column= "<<a[i]<<'.'<<endl;
    	else if ((i+1)%10==2) cout<<(i+1)%10<<"nd column= "<<a[i]<<'.'<<endl;
    	else if ((i+1)%10==3) cout<<(i+1)%10<<"rd column= "<<a[i]<<'.'<<endl;
    	else cout<<(i+1)%10<<"th column= "<<a[i]<<'.'<<endl;
	}
    cout<<"       Thanks."<<endl;
}
lli rvs ()
{
	cout<<"  Sorry"<<endl;
}
lli mul ()
{
    int r1,c1,r2, c2, i, j, k;
    cout<<"Enter number of rows and columns of 1st Matrix : ";
    cin>>r1>>c1;
    cout<<"Enter number of rows and columns of 2nd matrix : ";
    cin>>r2>>c2; 
    int a[r1][c1],b[r2][c2],c[r1+1][c2+1]={0};
    if (c1!=r2)
    {
        cout<<"Matrices cannot be multiplied!";
        return 0;
    }	
    cout<<"Enter elements of matrix A : "<<endl;
    for (i=0;i<r1;i++) for (j=0;j<c1;j++) cin>>a[i][j];
    cout<<"Enter elements of matrix B : "<<endl;
    for (i=0;i<r2;i++) for(j=0;j<c2;j++) cin>>b[i][j];		
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
        	c[i][j]=0;
            for (k=0;k<r2;k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    cout<<"Product of matrices\n";
    for (i=0;i<r1;i++)
    {    
        for (j=0;j<c2;j++)
            cout<<c[i][j]<<"  ";
        cout << "\n";
    }
    return 0;
}
