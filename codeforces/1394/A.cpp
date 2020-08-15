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
   ll n,d,m,w=1;
   cin>>n>>d>>m;
   ll ara[100005],p=0;
   for(ll i=1;i<=n;i++){cin>>ara[i];if(ara[i]>m) p++;}
   sort(ara+1,ara+n+1,greater<ll>());
   for(ll i=2;i<=n;i++)ara[i]+=ara[i-1];
   if(!p)
   {
       cout<<ara[n]<<endl;
   }
   else
   {
       ll ans=0;
       for(ll i=1;i<=p;i++)
       {
          ll q=n-(i-1)*(d+1)-1;
           if(q>=0)
           {
               ans=max(ans,ara[i]+ara[min(p+q,n)]-ara[p]);
           }
       }
       cout<<ans<<endl;
   }

}
