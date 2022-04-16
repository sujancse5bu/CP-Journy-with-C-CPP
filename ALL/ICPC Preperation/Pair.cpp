///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    /// declaration part:
    int i,j,k,l;
    pair <int, int> a;
    pair <long long int, long long int> b;
    pair <int, string> c;
    pair <string, string> d;


    cin>>a.first>>a.second;
    cout<<a.first<<endl;


    l=10;
    pair <int ,int> e[200];
    for (i=0;i<20;i++) cin>>e[i].first>>e[i].second;
    sort (e,e+20,greater<pair<int, int>>());
    for (i=0;i<20;i++) cout<<e[i].first<<' '<<e[i].second<<endl;


    /// 1 variable e multiple man rakha
    pair < pair <int,int>,pair<int,int>> f; // 4 ta man
    pair < pair <int,int>> f; // 3 ta man



    /// vector er pair
    vector <pair<int,int>>g;

    int p,q;
    for (i=0;i<10;i++)
    {
        cin>>p>>q;
        g.first.push_back (p);
        g.second.push_back (q);
        ///
    }
    /// Othoba-
    for (i=0;i<10;i++)
    {
        cin>>p>>q;
        a.push_back(make_pair(p,q));
    }
    ///g[0].first

    return 0;
}


