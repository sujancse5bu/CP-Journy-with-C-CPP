#include<iostream>
using namespace std;
int main()
{
	int i,j,n,l[260]={0},s=0;
	string a;i=0;j=0;
	cin>>n>>a;
	while (i<n)
    {
        for (j=0;j<26;j++)
        {
            if (l['n[i]']==0 || l['n[i]'+32]==0)
            {
                s++;
                l['n[i]']=1;
                l['n[i]'+32]=1;
            }
        }
        if (s==26)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"NO"<<endl;
	return 0;
}

