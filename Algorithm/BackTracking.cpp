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
vector <lli> a,b,p;
vector <bool> chosen;
lli n;
void search(){
	if (a.size()==n) {
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	else{
		for(int i=0;i<n;i++){
			if(chosen[i]) continue;
			chosen[i]=true;
			a.pb(i);
			search();
			chosen[i]=false;
			a.pop_back();
		}
	}
}
int main ()
{
    fast;
	lli i,j=0,k,l,m=0,x=0,y=0,z,o=0;
	n=2;
	chosen.rs(n);
	search();
	
	/*for (i=1;i<=n;i++) p.pb(i);
	do{
		ct(p,n);
	}
	while(next_permutation(all(p)));
	return 0;
	*/
}
