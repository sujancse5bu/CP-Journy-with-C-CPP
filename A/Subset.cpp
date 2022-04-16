/*________SHS________*/
#include <bits/stdc++.h>

#define lli long long int
#define pb push_back
#define rs resize
#define S second
#define F first
#define mp make_pair
#define all(v) v.begin(), v.end()
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define cn(a,n) for(i=0;i<n;i++) cin>>a[i];
#define ct(a,n) for(i=0;i<n;i++) cout<<a[i]<<' '; cout<<endl;
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <lli> a,b,c;
int main ()
{
    fast;
	lli i,j=0,k,l,m=0,n=0,x=0,y=0,z,p=0,o=0;
	n=5;
	for (k=0;k<(1<<n);k++){
		cout<<"k "<<k<<endl;
		vector<int> sb;
		for (i=0;i<n;i++){
			if(k&(1<<i)){
				cout<<k<<' '<<(1<<i)<<' '<<i<<endl;
				cout<<(k&(1<<i))<<endl;
				sb.pb(i);
				
			}
		}
		//for (i=0;i<sb.size();i++) cout<<sb[i]<<' ';
		cout<<endl;
	}
	return 0;
}
