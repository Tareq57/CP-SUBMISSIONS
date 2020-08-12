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
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<pll>vec;
    vec.pb(mp(x,y));
    for(ll i=y+1;i<=m;i++)vec.pb(mp(x,i));
    for(ll i=y-1;i>0;i--)vec.pb(mp(x,i));
    bool ok=true;
    for(ll i=x+1;i<=n;i++)
    {
        if(ok)
        for(ll j=1;j<=m;j++)
        {
            vec.pb(mp(i,j));
        }
        else
            for(ll j=m;j>0;j--)
            vec.pb(mp(i,j));
        ok=!ok;
    }
    for(ll i=x-1;i>0;i--)
    {
        if(ok)
            for(ll j=1;j<=m;j++)vec.pb(mp(i,j));
        else
            for(ll j=m;j>0;j--)vec.pb(mp(i,j));
        ok=!ok;
    }
    for(ll i=0;i<vec.size();i++)cout<<vec[i].f<<" "<<vec[i].s<<endl;
}
