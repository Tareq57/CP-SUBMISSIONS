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
int main()
{
   fastio
   ll n,q;
   cin>>n>>q;
   vll vec;
   for(ll i=0;i<n;i++){ll num;cin>>num;vec.pb(num);}
   ll ara[200005]={0},para[200005]={0};
   while(q--)
   {
       ll l,r;
       cin>>l>>r;
       ara[l]++;
       para[r+1]++;
   }
   for(ll i=1;i<=n;i++)
       ara[i]+=ara[i-1];
   for(ll i=1;i<=n;i++)
       para[i]+=para[i-1];
   for(ll i=1;i<=n;i++)
       ara[i]-=para[i];
   sort(ara,ara+n+1);
   sort(vec.begin(),vec.end());
   ll sum=0;
   for(ll i=n;i>0;i--)
    sum+=(ara[i]*vec[i-1]);
   cout<<sum<<endl;

}
