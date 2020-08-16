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
   ll t,o=0;
   cin>>t;
   while(t--)
   {
       ll n;cin>>n;vll vec;
       for(ll i=0;i<n;i++){ll num;cin>>num;vec.pb(num);}
       sort(vec.begin(),vec.end());
       bool ok=true;
       for(ll i=1;i<n;i++)
       {
           if(vec[i]!=vec[i-1])
           {
               ok=!ok;
               break;
           }
       }
       if(ok)cout<<n<<endl;
       else cout<<1<<endl;
   }
}
