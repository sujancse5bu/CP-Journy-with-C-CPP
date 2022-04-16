#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX (ll) 1e18 + 5
#define MIN -MAX
#define maxn 100005
#define F first
#define S second

bool isvowel(char ch) {
    int ret = 0;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        ret = 1;
    }
    return ret;
}

vector <int> l, r;
string s[maxn];

int main () {
	pair <char, pair <int, int> > v[maxn];
	pair <int, int> v1[maxn];
    ios :: sync_with_stdio(false);
    int n;
    scanf("%d", &n);
    for(int k = 0; k < n; k++) {
        cin >> s[k];
        int cnt = 0;
        for(int i = 0; i < s[k].size(); i++) {
            if(isvowel(s[k][i])) {
                cnt++;
            }
        }
        for(int i = s[k].size() - 1; i >= 0; i--) {
            if(isvowel(s[k][i])) {
                v[k].F = s[k][i];
                v[k].S.F = cnt;
                v[k].S.S = k;
                break;
            }
        }
    }
    int ini = 0;
    sort(v, v + n);
    for(int i = 0; i < n; i++) {
        if((i != n - 1) && (v[i].F == v[i + 1].F) && (v[i].S.F == v[i + 1].S.F)) {
            r.push_back(v[i].S.S);
            r.push_back(v[i + 1].S.S);
            i++;
        }
        else {
            v1[ini].F = v[i].S.F;
            v1[ini].S = v[i].S.S;
            ini++;
        }
    }
    sort(v1, v1 + ini);
    for(int i = 0; i < ini - 1; i++) {
        if(v1[i].F == v1[i + 1].F) {
            l.push_back(v1[i].S);
            l.push_back(v1[i + 1].S);
            i++;
        }
    }
    if(r.size() - l.size() > 2) {
    	int x = (l.size() + r.size()) / 4;
    	x *= 2;
    	int y = x;
    	while(l.size() < x) {
    		l.push_back(r[y]);
    		y++;
		}
	}
    int sz = min(l.size(), r.size());
    printf("%d\n", sz / 2);
    for(int i = 0; i < sz; i++) {
        cout << s[l[i]] << ' ' << s[r[i]] << endl;
    }

    return 0;
}
