
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
int main()
{
    fastio
    ll n,o=0;
    cin>>n;
    ll ara[500005],pre[500005]={0},suff[500005]={0};
    ll sum=0;
    for(ll i=1;i<=n;i++){
    ll num;cin>>num;
    sum=sum+num;
    ara[i]=num;
    }
    for(ll i=1;i<=n;i++)pre[i]=ara[i]+pre[i-1];
    for(ll i=n;i>0;i--)suff[i]=ara[i]+suff[i+1];
    map<ll,vll>mapp;
    for(ll i=1;i<=n;i++)mapp[pre[i]].pb(i);
    ll cnt=0;
    for(ll i=n;i>0;i--)
    {
        if(mapp[suff[i]].size()!=0)
        {
            if(sum-suff[i]*2==suff[i])
                {
                    //cout<<i<<endl;
                   ll p=up(mapp[suff[i]].begin(),mapp[suff[i]].end(),i)-mapp[suff[i]].begin();
                  while(i-mapp[suff[i]][p-1]<2&&p>0)
                   p--;
                   //cout<<p<<endl;
                    cnt+=(max(p,o));
                }
        }
    }
    cout<<cnt<<endl;
}