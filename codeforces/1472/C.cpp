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
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       vll vec(n+1);
       for(ll i=1;i<=n;i++)
       cin>>vec[i];
       ll ara[n+1]={0};
       ll end=0;
       for(ll i=1;i<=n;i++)
       {
           ll x=ara[i];
           if(i+vec[i]>n)
           {
               end=max(end,x+vec[i]);
           }
           else
           {
               ara[i+vec[i]]=max(ara[i+vec[i]],x+vec[i]);
           }
       }
       cout<<end<<endl;
   }
     
}