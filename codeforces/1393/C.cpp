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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>mapp;
        set<ll>s;
        ll mx=minf;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            mapp[num]++;
            mx=max(mx,mapp[num]);
            s.insert(num);
        }
        ll p=0,cnt=0,siz=s.size();
        while(!s.empty())
        {
            ll x=*s.begin();
            s.erase(x);
            if(mapp[x]==mx)p++;
            else
                cnt+=mapp[x];
        }
        cout<<p-1+(cnt/(mx-1))<<endl;
    }
}
