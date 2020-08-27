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
       ll p,f,cnts,cnta,s,a;
       cin>>p>>f>>cnts>>cnta>>s>>a;
       if(s>a)
       {
           swap(s,a);swap(cnts,cnta);
       }
       ll ans=0,q=min(cnts,p/s);
       for(ll i=0;i<=q;i++)
       {
           ll pp=p,ff=f,cntss=cnts,cntaa=cnta;
           ll s1=i;
           pp-=(s1*s);
           ll a1=min(pp/a,cntaa);
           cntaa-=a1;
           cntss-=s1;
           ll s2=min(ff/s,cntss);
           ff-=(s2*s);
           ll a2=min(ff/a,cntaa);
           ans=max(ans,a1+a2+s1+s2);
       }
       printf("%lld\n",ans);
   }


}


