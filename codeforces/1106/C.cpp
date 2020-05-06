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
    ll n,sum=0;
    cin>>n;
    vll vec,ans;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);

    }
    sort(vec.begin(),vec.end());
    ll p=0,q=n-1;
    while(p<q)
    {
        ll s=vec[p]+vec[q];
        ans.pb(s*s);
        p++;
        q--;
    }
    for(ll i=0;i<ans.size();i++)
    {
        sum+=ans[i];
    }
    cout<<sum<<endl;
}
