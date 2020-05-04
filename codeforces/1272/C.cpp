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
#define up upper_bound
#define lp lower_bound
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll nat(ll n)
{
    return (n*(n+1)/2);
}
int main()
{
  int ara[26];
  vll vec;
  memset(ara,0,sizeof(ara));
  ll n,k;
  cin>>n>>k;
  string str;
  cin>>str;
  for(ll i=0;i<k;i++)
  {
      char ch;
      cin>>ch;
      ch-='a';
      ara[ch]=1;
  }
  for(ll i=0;i<n;i++)
  {
      if(ara[str[i]-'a']==0)
        str[i]='0';
  }
  ll p=0;
  for(ll i=0;i<n;i++)
  {
      if(str[i]=='0')
      {
          vec.pb(p);
          p=0;
      }
      else
        p++;
  }
  vec.pb(p);
  ll sum=0;
  for(ll i=0;i<vec.size();i++)
  {
      sum+=nat(vec[i]);
  }
  cout<<sum<<endl;



}
