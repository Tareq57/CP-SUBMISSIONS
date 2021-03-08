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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll res[501][501];
vll prime()
{
    vll vec;
    ll ara[1000000]={0};
    for(ll i=2;i*i<=1000000;i++)
    {
        for(ll j=i*2;j<=1000000;j+=i)
        {
            ara[j]=1;
        }
    }
    for(ll i=2;i<=1000000;i++)
    {
        if(ara[i]==0)
        vec.pb(i);
    }
    return vec;

}
int main()
{
    fastio
    ll n,m;
    cin>>n>>m;
    vll vec;
    ll ara[501][501];
    for(ll i=0;i<n;i++)
    for(ll j=0;j<m;j++)
    cin>>ara[i][j];
    vec=prime();
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            auto it=up(vec.begin(),vec.end(),ara[i][j])-vec.begin();
            if(it>0&&vec[it-1]==ara[i][j])
            it--;
            res[i][j]=vec[it]-ara[i][j];
        }
    }
    ll sum=inf;
    for(ll i=0;i<n;i++)
    {
        ll r=0;
        for(ll j=0;j<m;j++)
        {
            r+=(res[i][j]);
        }
        sum=min(sum,r);
    }
    for(ll i=0;i<m;i++)
    {
        ll r=0;
        for(ll j=0;j<n;j++)
        {
            r+=(res[j][i]);
        }
        sum=min(sum,r);
    }
    cout<<sum<<endl;   
}
 