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
int main()
{
   fastio
   ll t;
   cin>>t;
   while(t--)
   {
      ll n,mn=inf;
      cin>>n;
      vll vec;
      for(ll i=0;i<n;i++)
      {
          ll num;cin>>num;vec.pb(num);
          mn=min(mn,num);
      }
      vll ara;
      for(ll i=0;i<n;i++)
      {
          if((ll)__gcd(vec[i],mn)!=mn)
            ara.pb(i);
      }
      bool ok=true;
      for(ll i=1;i<ara.size();i++)
      {
          if(vec[ara[i-1]]>vec[ara[i]])
          {
              ok=!ok;
              break;
          }
      }
      vll ans=vec;
      sort(ans.begin(),ans.end());
      for(ll i=0;i<ara.size();i++)
      {
          if(vec[ara[i]]!=ans[ara[i]])
          {
              if(ok)
              ok=!ok;break;
          }
      }
      if(ok)cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
 
   }
 
 
}
 