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
int main()
{
    ll n,ans=0;
    cin>>n;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    sort(vec.begin(),vec.end());
    for(ll i=0;i<n;i++)
    {
        ans+=abs((i+1)-vec[i]);
    }
    cout<<ans<<endl;
}
