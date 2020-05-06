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
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,sum1=0,sum2=0;
      cin>>n;
      vll vec;
      for(ll i=0;i<2*n;i++)
      {
          ll num;
          cin>>num;
          vec.pb(num);
      }
      sort(vec.begin(),vec.end());
      cout<<vec[n]-vec[n-1]<<endl;
  }

}
