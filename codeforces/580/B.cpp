#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
int main()
{
   ll n,d;
   cin>>n>>d;
   vector <pair<ll,ll> > vec;
   vector <ll> ara;
   for(ll i=0;i<n;i++)
   {
       ll a,b;
       cin>>a>>b;
       vec.pb(mp(a,b));
   }
   ll sum=0,ans=0;
   sort(vec.begin(),vec.end());
   for(ll i=0;i<n;i++)
   {
       sum+=vec[i].s;
       ara.pb(sum);
      // cout<<vec[i].s<<endl;
   }
   ll p=0;
   for(ll i=0;i<n;i++)
   {
      // cout<<ma<<endl;
       while(p<n&&vec[p].f-vec[i].f<d)
       {
           p++;
       }
       if(i==0)
       {
           ans=ara[p-1];
       }
       else
       ans=max(ans,(ara[p-1]-ara[i-1]));
       //cout<<ans<<endl;
   }
   cout<<ans<<endl;
}
