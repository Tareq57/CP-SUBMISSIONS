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
ll gcd(ll n,ll m)
{
    ll x,y;
    if(n>m)
    {
        y=n;
        x=m;
    }
    else
    {
        y=m;
        x=n;
    }
    if(y%x==0)
        return x;
    else
    {
        return gcd(x,y%x);
    }
}
int main()
{
   ll n;
   cin>>n;
   ll ans=1;
  for(ll i=1;i<=n;i++)
   {
       ans=((ans%mod)*(i%mod))%mod;
   }
   ll cnt=1;
   for(ll i=1;i<n;i++)
   {
       cnt=((cnt%mod)*(2%mod))%mod;
   }
   if(ans>cnt)
    cout<<ans-cnt<<endl;
   else
    cout<<mod-(cnt-ans)<<endl;
}
