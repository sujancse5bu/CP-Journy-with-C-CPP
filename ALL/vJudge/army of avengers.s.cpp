/** Writer: Sabuj Das **/

#include <bits/stdc++.h>
using namespace std;

#define Y() cout << "YES" << endl
#define N() cout << "NO" << endl
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ll long long int
#define malo return 0
#define MAX 1000000000000000005
#define MIN -1000000000000000005
#define vec vector <ll>
#define vec_p vector <pair <ll, ll>>
#define it vector <ll> :: iterator
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define rev reverse
#define _max *max_element
#define _min *min_element
#define SUM accumulate
#define BS binary_search
#define CT count
#define lb lower_bound
#define ub upper_bound
#define B begin()
#define E end()
#define F first
#define S second

vec  v1, v2, v3;
string s1, s2, s3;

int main ()
{
	//freoprn("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    ll a[100001]={0},v, b[100001], c=0, d=0, i, j, k=0, l=0, m, n, p=0, q, t, ct = 0, ct1 = 0, ct2 = 0, ck = 0, ck1 = 0, ck2 = 0, ln, ln1, start, end, mid;
    ll a1 = 0, a2 = 0, a3 = 0, a4 = 0, sum = 0, sum1 = 0, max1, max2, min1, min2;
    double x, y, z;
    char s[1101],st[1001],  ch, ch1, ch2;
    //cin>>n>>m;
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++){
        //cin>>a[i];
        scanf("%lld",&a[i]);
    }
    l=0;
    for(j=0;j<m;j++){
            l=0;
        //cin>>c;
        scanf("%lld",&c);
        if(c==1){
            //cin>>d;
            scanf("%lld",&d);
            a1=a1+d;
        }
        else{
            //cin>>p>>q;
            scanf("%lld%lld",&p,&q);
            for(i=p-1;i<q;i++){
                l=l+a[i]+a1;
            }
            printf("%lld\n",l);
        }
    }
    return 0;
}
