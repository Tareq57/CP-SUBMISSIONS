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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll x,y,n;
      cin>>n>>x>>y;
      vll vec;
      ll p=y-x,q=0;
      for(ll i=1;i<=max(x,p);i++)
      {
          if(p%i==0&&(p/i)<=n-1)
          {
              q=i;
              break;
          }
      }
     // cout<<q<<endl;
      vec.pb(x);
      n--;
      ll mn=x;
      while(n>p/q&&mn-q>0)
      {
          vec.pb(mn-q);
          mn-=q;
          n--;
      }
      ll mx=x;
      while(n>0)
      {
          vec.pb(mx+q);
          mx+=q;
          n--;
      }
      sort(vec.begin(),vec.end());
      for(auto x:vec)cout<<x<<" ";
      cout<<endl;




    }
}
