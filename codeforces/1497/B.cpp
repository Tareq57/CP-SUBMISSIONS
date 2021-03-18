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
#define lp lower_bound
#define pq priority_queue
#define inf 1e10
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        map<ll,ll>mp;
        vll vec;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            mp[num%m]++;
        }
        ll ans=0;
        if(mp[0]>0)
        ans++;
        ll ara[m+1]={0};
        for(ll i=1;i<m;i++)
        {
            if(mp[i]==0&&mp[m-i]==0)continue;
           if(ara[i]==0&&ara[m-i]==0&&(mp[i]>0||mp[m-1]>0))
           {
               ara[i]=1;
               ara[m-i]=1;
               if(i==m-i)
               {
                   ans++;
               }
               else
               {
                   ll p=max(mp[i],mp[m-i]);
                   ll q=min(mp[i],mp[m-i]);
                   if(p-q>1)
                   {
                       p-=(q);
                       ans+=(p);
                   }
                   else
                   {
                       ans++;
                   }
                  //cout<<ans<<endl;
               }
               //cout<<mp[i]<<" "<<mp[m-i]<<" "<<ans<<endl;
           }
        }
        cout<<ans<<endl;
 
    }  
}
 