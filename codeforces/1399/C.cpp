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
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vll vec;
       for(ll i=0;i<n;i++){ll num;cin>>num;vec.pb(num);}
       sort(vec.begin(),vec.end());
       if(n==1){cout<<0<<endl;continue;}
       ll ara[101],pa[101];
       for(ll i=0;i<101;i++)ara[i]=0;
       memset(pa,0,sizeof(pa));
       for(ll i=0;i<n;i++)pa[vec[i]]++;
       ll ans=0;
       for(ll i=2;i<=100;i++)
       {
           ll p=1;
           ll q=i-1;
           while(q>=p)
           {
               if(p==q)
               {
                   ara[i]+=(pa[p]/2);
               }
               else
               ara[i]+=(min(pa[p],pa[q]));
               p++;
               q--;
           }
           ans=max(ans,ara[i]);
           //cout<<ara[i]<<endl;
       }
       cout<<ans<<endl;


    }
}
