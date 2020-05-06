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
   ll n;
   cin>>n;
   vll vec;
   vll ::iterator it;
   for(ll i=0;i<n;i++)
   {
       ll num;
       cin>>num;
       vec.pb(num);
   }
   sort(vec.begin(),vec.end());
   ll q;
   cin>>q;
   while(q--)
   {
       ll num;
       cin>>num;
       if(num<vec[0])
       {
           cout<<0<<endl;
           continue;
       }
       it=up(vec.begin(),vec.end(),num);
       ll ans=distance(vec.begin(),it);
       cout<<ans<<endl;
   }

}
