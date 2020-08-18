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
ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2) res=((res%mod)*(x%mod))%mod;
        y/=2;
        x=((x%mod)*(x%mod))%mod;
    }
    return res;
}
ll factorial(ll n)
{
    ll res=1;
    for(ll i=1;i<=n;i++)
    {
        res=(res*i)%mod;
    }
    return res;
}
ll moduloinverse(ll a)
{
 return power(a,mod-2);
}
int main()
{
   fastio
   ll n,m;
   cin>>n>>m;
   ll p=n+(2*m)-1;
   ll q=2*m;
   ll r=n-1;
  // cout<<moduloinverse(factorial(p))<<" "<<moduloinverse(factorial(q))<<" "<<moduloinverse(factorial(r))<<endl;
   ll res=((((factorial(p)%mod)*((moduloinverse(factorial(q)))%mod))%mod)*((moduloinverse(factorial(r)))%mod))%mod;
   cout<<res<<endl;
}
