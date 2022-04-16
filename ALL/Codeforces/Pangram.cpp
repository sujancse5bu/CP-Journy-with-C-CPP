#include<iostream>
using namespace std;
int main()
{
	int i,j,n,l[260]={0},s=0;
	char e;
	string a;i=0;j=0;
	cin>>n>>a;
	while (i<n)
    {
        e=a[i];
        for (j=0;j<26;j++)
        {
            if (l[e]==0 && l[e+32]==0 && l[e-32]==0)
            {
                s++;
                l[e]=1;
                l[e+32]=1;
                l[e-32]=1;
                break;
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
