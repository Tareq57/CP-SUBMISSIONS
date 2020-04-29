#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define vector<long long> vll
#define pair<long long, long long> pll
int main()
{
    ll ara[26];
    ll ans[26],pos[26],sop[26];
    memset(ara,0,sizeof(ara));
    memset(pos,0,sizeof(pos));
    memset(sop,0,sizeof(sop));
    string str;
    cin>>str;
    ll n=str.size();
    for(ll i=0;i<26;i++)
    {
        ans[i]=n;
    }
    for(ll i=0;i<n;i++)
    {
        ll p=str[i]-'a';
        ara[p]=max(ara[p],i+1-pos[p]);
        pos[p]=i+1;
        //cout<<ara[p]<<endl;
       /* ll q=n-i;
        ans[p]=min(ans[p],abs(q-sop[p]));
        sop[p]=q;
        //cout<<ans[p]<<endl;*/
    }
    ll res=INT_MAX;
    for(ll i=0;i<26;i++)
    {
        if(ara[i]==0)
        {
            continue;
        }
      ara[i]=max(n+1-pos[i],ara[i]);
     // cout<<ans[i]<<endl;
      res=min(res,ara[i]);
    }
    cout<<res<<endl;

}
