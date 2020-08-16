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
#define mod   998244353
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
   fastio
    ll n,p=inf;
    cin>>n;
    vector<pll> vec;
    vec.pb(mp(1,n));
    for(ll i=1;i<n;i++)
    {
        vec.pb(mp(i,i+1));
    }
    for(ll i=n;i<=(n*(n-1))/2;i++)
    {
        bool ok=true;
        for(ll j=2;j*j<=i;j++)
        {
            if(!(i%j))
            {
                ok=!ok;
                break;
            }
        }
        if(ok)
        {
            p=i-n;
            break;
        }
    }
   // cout<<p<<endl;
    if(p>n/2)cout<<-1<<endl;
    else
    {
      ll b1=1,b2=n-1;
      while(p--&&b1<b2)
      {
          vec.pb(mp(b1,b2));
          b1++;
          b2--;
      }
      cout<<vec.size()<<endl;
      for(auto x:vec)cout<<x.f<<" "<<x.s<<endl;
    }
}
