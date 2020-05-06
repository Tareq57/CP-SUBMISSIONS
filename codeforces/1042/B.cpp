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
    ll ans=inf;
    ll n;
    cin>>n;
    map <string,ll> m;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        if(m[str]==0)
        {
            m[str]=num;
        }
        else
            m[str]=min(m[str],num);
    }
    if(m["A"]!=0&&m["B"]!=0&&m["C"]!=0)
        ans=m["A"]+m["B"]+m["C"];

    if(m["ABC"]!=0)
        ans=min(ans,m["ABC"]);
        if(m["AB"]!=0&&m["C"]!=0)
            ans=min(ans,m["AB"]+m["C"]);
            if(m["BC"]!=0&&m["A"]!=0)
            ans=min(ans,m["BC"]+m["A"]);
            if(m["AC"]!=0&&m["B"]!=0)
            ans=min(ans,m["AC"]+m["B"]);
            if(m["AB"]!=0&&m["BC"]!=0)
            ans=min(ans,m["AB"]+m["BC"]);
           // cout<<ans<<endl;
            if(m["AB"]!=0&&m["AC"]!=0)
            ans=min(ans,m["AB"]+m["AC"]);
            if(m["AC"]!=0&&m["BC"]!=0)
            ans=min(ans,m["AC"]+m["BC"]);

  if(ans==inf)
    cout<<-1<<endl;
  else
    cout<<ans<<endl;


}
