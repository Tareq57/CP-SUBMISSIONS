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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll n;
    cin>>n;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    sort(vec.begin(),vec.end());
    bool ok=true;
  for(ll i=0;i<n-2;i++)
  {
      if(vec[i+2]<vec[i]+vec[i+1])
      {
          ok=false;
          break;
      }
  }
  if(ok)
  {
      cout<<"NO"<<endl;
  }
  else
    cout<<"YES"<<endl;


}

