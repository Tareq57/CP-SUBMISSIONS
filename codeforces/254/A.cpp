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
   freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
   ll n;cin>>n;
   vector<pll>vec;
   for(ll i=0;i<(2*n);i++){ll num;cin>>num;vec.pb(mp(num,i+1));}
   sort(vec.begin(),vec.end());bool ok=true;
   for(ll i=1;i<(2*n);i+=2)
   {
       if(vec[i].f!=vec[i-1].f)
       {
           ok=false;
           break;
       }
   }
   if(!ok)cout<<-1<<endl;
   else
   {
      // for(auto it:vec)cout<<it.f<<" "<<it.s<<endl;
      for(ll i=1;i<(2*n);i+=2)
      cout<<vec[i].s<<" "<<vec[i-1].s<<endl;
   }
}

