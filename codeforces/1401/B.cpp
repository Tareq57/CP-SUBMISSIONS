
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
       ll x1,y1,z1,x2,y2,z2;cin>>x1>>y1>>z1>>x2>>y2>>z2;
       ll p=min(x1,z2);
       x1-=p;z2-=p;p=min(x2,y1);x2-=p;y1-=p;
       ll ans=min(z1,y2)*2;
       p=min(z1,y2);
       z1-=p;y2-=p;
       p=min(y1,y2);
       y1-=p;y2-=p;
       p=min(z1,z2);
       z1-=p;z2-=p;
       cout<<ans-(min(z2,y1)*2)<<endl;
   }
 
 
}