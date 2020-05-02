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
    ll n,s,ans=0;
    cin>>n>>s;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    sort(vec.begin(),vec.end());
    if(s>vec[n/2])
    {
       for(ll i=n/2;i<n;i++)
    {
        if(vec[i]<s)
            ans+=(s-vec[i]);
    }
    }
    else
    {
         for(ll i=0;i<=n/2;i++)
    {
        if(vec[i]>s)
            ans+=(vec[i]-s);
    }
    }


    cout<<ans;
}

