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
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll ara[n+1];
       ll sum=0;
       for(ll i=0;i<n;i++){cin>>ara[i];sum+=ara[i];}
       vector<pll>vec;
       vec.pb(mp(ara[0],0));
       for(ll i=1;i<n;i++)
       {
          ara[i]+=ara[i-1];
          if(vec.back().f<ara[i])
          vec.pb(mp(ara[i],i));
       }
       while(m--)
      {
         ll p;
         cin>>p;
         auto it=lp(vec.begin(),vec.end(),mp(p,(ll)-1))-vec.begin();
         if(it==vec.size())
         {
            if(sum<=0)
            cout<<-1<<" ";
            else
            {
               ll x=p-vec.back().f-1+sum;
               ll cnt=x/sum;
               p-=(cnt*sum);
               auto it2=lp(vec.begin(),vec.end(),mp(p,(ll)-1))-vec.begin();
               cout<<cnt*n+vec[it2].s<<" ";
            }
         }
         else
         {
            cout<<vec[it].s<<" ";
         }

      }
      cout<<endl;
       
       
    }
}
 