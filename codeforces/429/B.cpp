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
#define mod 1000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
#define o 0
int main()
{
    fastio
    ll ara[1005][1005];
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)cin>>ara[i][j];
    ll lahub_starts[1001][1001]={0};
    for(ll i=1;i<=n;i++)
        for(ll j=1;j<=m;j++)
        lahub_starts[i][j]=max(lahub_starts[i-1][j],lahub_starts[i][j-1])+ara[i][j];
    ll lahub_end[1001][1001]={0};
    for(ll i=n;i>0;i--)
        for(ll j=m;j>0;j--)
        lahub_end[i][j]=max(lahub_end[i][j+1],lahub_end[i+1][j])+ara[i][j];
    ll lahubina_starts[1001][1001]={0};
    for(ll i=n;i>0;i--)
        for(ll j=1;j<=m;j++)
        lahubina_starts[i][j]=max(lahubina_starts[i+1][j],lahubina_starts[i][j-1])+ara[i][j];
    ll lahubina_end[1001][1001]={0};
    for(ll i=1;i<=n;i++)
        for(ll j=m;j>0;j--)
        lahubina_end[i][j]=max(lahubina_end[i][j+1],lahubina_end[i-1][j])+ara[i][j];
    ll ans=minf;
    for(ll i=2;i<n;i++)
        for(ll j=2;j<m;j++)
    {
        ll p=lahub_starts[i-1][j]+lahubina_starts[i][j-1]+lahub_end[i+1][j]+lahubina_end[i][j+1];
        ll q=lahubina_starts[i+1][j]+lahubina_end[i-1][j]+lahub_starts[i][j-1]+lahub_end[i][j+1];
        ans=max({ans,p,q});
    }
   cout<<ans<<endl;





}
