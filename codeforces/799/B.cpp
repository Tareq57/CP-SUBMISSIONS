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
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll n;
    cin>>n;
    set <ll,less<ll> > s[4];
    vll p;
    for(ll i=0;i<n;i++)
    {
      ll num;
      cin>>num;
      p.pb(num);
    }
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        s[num].insert(p[i]);
    }
    for(ll i =0;i<n;i++)
    {
        ll num;
        cin>>num;
        s[num].insert(p[i]);
    }
    ll m;
    cin>>m;
    vll vec;
    while(m--)
    {
        ll num;
        cin>>num;
        if(s[num].empty())
        {
            vec.pb(-1);
            continue;
        }
       ll ans=*s[num].begin();
        vec.pb(ans);

        for(ll i=0;i<4;i++)
        {
            s[i].erase(ans);
        }
    }
    for(auto x: vec)
    {
        cout<<x<<" ";
    }
}
