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
int main()
{
   string str,ans(5,'0');
   cin>>str;
   ll n=str.size(),index=0;
  for(ll i=0;i<n;i++)
  {
      if(str[i]=='h')
      {
          ans[0]='h';
          index=i+1;
          break;
      }
  }
  for(ll i=index;i<n;i++)
  {
      if(str[i]=='e')
      {
          ans[1]='e';
          index=i+1;
          break;
      }
  }
   for(ll i=index;i<n;i++)
  {
      if(str[i]=='l')
      {
          ans[2]='l';
          index=i+1;
          break;
      }
  }
   for(ll i=index;i<n;i++)
  {
      if(str[i]=='l')
      {
          ans[3]='l';
          index=i+1;
          break;
      }
  }
   for(ll i=index;i<n;i++)
  {
      if(str[i]=='o')
      {
          ans[4]='o';
          index=i+1;
          break;
      }
  }
  if(ans=="hello")
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
