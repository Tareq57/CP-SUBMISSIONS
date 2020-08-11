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
#define o 0
int main()
{
    fastio
    ll n;
    cin>>n;
    vll vec[10001];
    for(ll i=2;i<=n;i++)
    {
        ll node;
        cin>>node;
        if(node>i)vec[i].pb(node);
        else vec[node].pb(i);
    }
    ll real[10001],ara[10001]={0};
    for(ll i=1;i<=n;i++)cin>>real[i];
    queue<ll>q;
    q.push(1);
    ll cnt=0;
    while(!q.empty())
    {
      ll x=q.front();
      q.pop();
      if(vec[x].size())
      {
          for(ll i=0;i<vec[x].size();i++)
            q.push(vec[x][i]);
      }
      if(ara[x]!=real[x])
      {
          cnt++;
          queue<ll> qu;
          qu.push(x);
          while(!qu.empty())
          {
              ll xx=qu.front();
              qu.pop();
              ara[xx]=real[x];
              if(vec[xx].size())
              {
                  for(ll i=0;i<vec[xx].size();i++)
                    qu.push(vec[xx][i]);
              }
          }
      }
    }
    cout<<cnt<<endl;
}
