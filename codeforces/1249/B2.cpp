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
ll vec[200001],fin[200001],day=0;
ll dfs(ll a,ll b)
{
    day++;
    if(vec[a]==b)
    {
        fin[a]=day;
        return day;
    }   
    fin[a]=dfs(vec[a],b);
    return fin[a];
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        memset(fin,0,sizeof(fin));
        for(ll i=1;i<=n;i++)
        {
            ll num;
            cin>>num;
            vec[i]=num;
        }
        for(ll i=1;i<=n;i++)
        {
            if(fin[i])
            {
                cout<<fin[i]<<" ";
                continue;
            }
            day=0;
            dfs(i,i);
            cout<<fin[i]<<" ";
        }
        cout<<endl;

    }  
}
 