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
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
vll graph[300],res,vec;
ll n,ara[300],leaves[300];
map<ll,ll>mapp;
map<ll,bool>mapp1;
void dfs(ll u)
{
    ara[u]=true;
    res.pb(u);
    for(auto it=graph[u].begin();it!=graph[u].end();it++)
        if(!ara[*it]&&*it!=0)
        dfs(*it);
}
int main()
{
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll num;cin>>num;vec.pb(num);
        mapp1[num]=false;mapp[num]=i+1;
        ara[i+1]=false;
    }
    for(ll i=0;i<n;i++)
    {
        ll p=vec[i]*2;
        if(!mapp1[p])
        {
            graph[mapp[vec[i]]].pb(mapp[p]);
            leaves[mapp[p]]++;
        }
        if(!(vec[i]%3)&&!mapp1[vec[i]/3])
        {
            p=vec[i]/3;graph[mapp[vec[i]]].pb(mapp[p]);
            leaves[mapp[p]]++;
        }
    }
    ll node=0;
    for(ll i=1;i<=n;i++)
    {
        if(!leaves[i])
        {
            node=i;
            break;
        }
    }
    dfs(node);
    for(auto x:res)
        cout<<vec[x-1]<<" ";
    cout<<endl;
}

