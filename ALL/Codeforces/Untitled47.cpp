#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k=0,s=0,c=0,arr[10000],var[10000],l,n,m,dot=0,es=0,row=0,col=0,stv=0,dot1=0;
    ///string x;
    char x[1000][20];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>x[i][j];
            if(x[i][j]=='.') dot++;
            if(x[i][j]=='S') stv++;
        }
        if(dot==m){
            row++;
        }
        dot=0;
     }
         /// dot=0;
            for(i=0;i<m;i++)  {
          for(j=0;j<n;j++){
                    if(x[i][j]=='.'){
                   dot1++;
                    }
            }
                if(dot1==n){
                    col++;
                }

                    dot1=0;

            }
            cout<<"col="<<col<<"row="<<row<<"dot="<<dot<<"stv="<<stv<<endl;
            cout<<abs(((col*n)+(row*m))-(row*stv));




}

