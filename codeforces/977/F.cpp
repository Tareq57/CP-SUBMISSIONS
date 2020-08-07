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
    map<ll,ll>mapp;
    ll n;
    cin>>n;
    vll vec,ara;
    ll res=-1,ans=-1,pos=-1;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        mapp[num]=mapp[num-1]+1;
        if(mapp[num]>ans)
        {
            res=num;ans=mapp[num];pos=i;
        }
        vec.pb(num);
    }
    cout<<ans<<endl;
    ll p=res-ans+1;
    while(pos>=0&&res>=p)
    {
        if(vec[pos]==res)
        {
            ara.pb(pos+1);
            res--;
        }
        pos--;
    }
    for(ll i=ara.size()-1;i>=0;i--)
    {
        cout<<ara[i]<<" ";
    }
}
