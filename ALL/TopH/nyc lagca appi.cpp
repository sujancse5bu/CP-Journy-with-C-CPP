////////////////////////////////////
///                              ///
///   ALL CREDIT GOES TO GOD     ///
///       SHUBHA BISWAS          ///
///                              ///
///       DEPT. OF CSE           ///
///    BARISAL UNIVERSITY        ///
///                              ///
////////////////////////////////////


#include <bits/stdc++.h>
#define  FAST             ios :: sync_with_stdio(false); cin.tie(0);
#define  MX               10000000000000000
#define  MI              -10000000000000000
#define  ll               long long
#define  ses              return 0
#define  nl               "\n"
#define  br               break
#define  cu               continue
#define  V                vector
#define  B                begin()
#define  E                end()
#define  I                iterator
#define  MS               multiset
#define  MM               multimap
#define  YE                "YES"
#define  NO                "NO"
#define  Ye                "Yes"
#define  No                "No"
#define  max4(p,q,r,s)     max(p,max(q,max(r,s)))
#define  max3(p,q,r)       max(p,max(q,r))
#define  vecmax(a)         *max_element(a.begin(),a.end())
#define  vecmin(a)         *min_element(a.begin(),a.end())
#define  arrysum(a)        accumulate(a.begin(),a.end())
#define  totaloc(a,x)      count(a.begin(),a.end(),x)
#define  lastpo(a,x)       find(a.begin(),a.end(),x)
#define  FE(a,x)           lower_bound(a.begin(),a.end(),x)
#define  LE(a,x)           upper_bound(a.begin(),a.end(),x)
#define  DFV(a,x)          a.erase(a,a.begin()+x)
#define  MAX               100000
#define  in1(a)            scanf("%lld",&a)
#define  in2(a,b)          scanf("%lld%lld",&a,&b)
#define  out(a)            printf("%lld ",a)
#define  pb                push_back
#define  PII               pair<long long ,long long>
#define  PII2              pair<long long,pair<long long,long long> >
#define  SP                 " "
#define  mp                make_pair

using namespace std;
//long long int a[1000000],b[1000000];
//long long int sps[100000];
//long long int ar[1000009],pr[1000009];

//bool stcom(string a,string b){if(a.size()!=b.size())return a.size()>b.size();return a>b;}
//ll   intcom(ll a,ll b) { return a>b;}
//int hi(ll a[],ll n){ll m=0; for(ll i=0;i<n;i++) m=max(m,a[i]);return m;}
//int lo(ll a[],ll n){ll m=100000000000; for(ll i=0;i<n;i++) m=min(m,a[i]);return m;}
void multyply(vector<ll>&v,ll n)
{
	ll carry=0,i,mul;
	ll x=v.size();
	for(i=0;i<x;i++)
	{
		mul=carry+v[i]*n;
		v[i]=mul%10;
		carry=mul/10;
	}
	while(carry!=0)
	{
		v.pb(carry%10);
		carry/=10;
	}
}
int value(vector<ll>&v)
{
	ll i,sum=0;
	ll x=v.size();
	for(i=x-1;i>=0;i--)
	{
		sum=sum*10+v[i];
		sum=sum%1000000007;
	}
	return sum;
}
int main()
{
   FAST
   vector<ll>v;
   ll n,m,k,x,y,i,j,ck1=0,ck3=0,ck2=0,sum=0,sum1=0,sum2=0,ck=0,f=1;
   cin>>m;
   for(j=1;j<=m;j++){
   cin>>n;
   v.pb(1);
   for(i=2;i<=n;i++) multyply(v,i);
   x=value(v);
   cout<<"Case "<<j<<": "<<x<<nl;
   v.clear();
}
}
