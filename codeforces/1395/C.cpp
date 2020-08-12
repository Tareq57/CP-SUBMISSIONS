//BISMILLAH
//RABBI JIDNI ILMA
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ull  unsigned long long
#define vll  vector <long long>
#define pll pair <long long,long long>
#define f first
#define s second
#define up upper_bound
#define lp lower_bound
#define pq priority_queue
#define inf 1e10
#define minf -1e10
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll n,m;
    cin>>n>>m;
    set<ll>s[n+1],se;
    vll vec;
    for(ll i=0;i<n;i++){ll num;cin>>num;vec.pb(num);}
    for(ll i=0;i<m;i++)
    {
        ll num;
        cin>>num;
        for(ll i=0;i<n;i++)
        {
            s[i].insert(num&vec[i]);
        }
    }
    for(auto it:s[0])
    {
       se.insert(it);
    }
    for(ll i=1;i<n;i++)
    {
        set <ll> me;
        for(auto it:se)
        {
            for(auto it1:s[i])
            {
                me.insert(it|it1);
            }
        }
        se=me;
    }
    cout<<*(se.begin())<<endl;






}
