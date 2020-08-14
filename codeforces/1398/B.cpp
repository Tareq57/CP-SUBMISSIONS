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
   ll t,w;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       ll n=str.size();
       vll vec;
       for(ll i=0;i<n;i++)
       {
           if(str[i]=='1')
           {
               ll j,cnt=0;
               for(j=i;j<n;j++)
               {
                   if(str[j]=='0')
                    break;
                   cnt++;
               }
               i=j;
               vec.pb(cnt);
           }
       }
       sort(vec.rbegin(),vec.rend());
       ll ans=0;
       for(ll i=0;i<vec.size();i+=2)
       {
           ans+=vec[i];
       }
       cout<<ans<<endl;

   }
}
