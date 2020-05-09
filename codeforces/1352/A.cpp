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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
   ll n,ans=0;
   cin>>n;
   vll vec;
   while(n>0)
   {
       ll p=n%10;
      vec.pb(p);
      n/=10;
   }
   for(ll i=0;i<vec.size();i++)
   {
       if(vec[i]==0)
        continue;
       else ans++;
   }
   cout<<ans<<endl;
   for(ll i=0;i<vec.size();i++)
   {
       if(vec[i]==0)
        continue;
       else
       {
           cout<<vec[i];
           for(ll j=0;j<i;j++)
           {
               cout<<0;
           }
           cout<<" ";
       }
   }
   cout<<endl;
    }
}
