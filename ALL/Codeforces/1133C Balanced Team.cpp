/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define fast ios :: sync_with_stdio(false); cin.tie(0);
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#define pb push_back
#define bn begin()
#define rs resize
#define en end()
using namespace std;
vector <lli> v,t;
int main ()
{
    fast;
    lli i,j=1,n=0,o=0,h,m,l,p,w,x=1,y,h1,m1,h2,m2[2000]={0};
    cin>>n;
    v.rs(n);
    f(i,0,n-1) 
	{
		cin>>v[i];
		//m2[v[i]]++;
	}
    sort(v.bn,v.en);/*
    f(i,0,n-1) cout<<v[i]<<endl;
    cout<<endl;
    f(i,v[0],v[n-1]) if (m2[i]>0) cout<<i<<' '<<m2[i]<<endl;
    cout<<endl;*/
    
    
    
    
    if (v[n-1]-v[0]<=5)
    {
    	cout<<n<<endl;
    	return 0;
	}
    for (i=0;j<n;) if ((v[j]-v[i])>5) 
	{
		//cout<<j<<' '<<i<<' '<<v[j]<<' '<<v[i]<<' '<<j-i<<endl;
		t.pb(j-i);
		i++;
		//if (j-i==0) j++;
	}
	else  j++;
	t.pb(j-i);
	
	
	
	/*
	if (x>1)  t.pb(x); 
	cout<<endl<<endl;
	y=t.size();
	f(i,0,y-1) cout<<t[i]<<' ';
	cout<<endl;*/
	sort(t.bn,t.en);
	cout<<t[t.size()-1]<<endl;
    return 0;
}
