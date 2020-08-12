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
int main()
{
    fastio
      ll n;
        cin>>n;
        ll ara[200005]={0},even[200005]={0},odd[200005]={0};
        for(ll i=1;i<=n;i++)
        {
            cin>>ara[i];
            odd[i]=odd[i-1];even[i]=even[i-1];
            if(i%2)odd[i]+=ara[i];
            else even[i]+=ara[i];
        }
        ll ans=odd[n];
        for(ll i=1;i<n;i++)
        {
            if(i%2)
                ans=max(ans,odd[i-1]+even[n]-even[i+1]+ara[i]+ara[i+1]);
                else
                    ans=max(ans,even[i-1]+odd[n]-odd[i+1]+ara[i]+ara[i+1]);
        }
        cout<<ans<<endl;



}
