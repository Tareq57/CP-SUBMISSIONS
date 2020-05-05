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
    ll n;
    cin>>n;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    ll ans=0;
    sort(vec.begin(),vec.end());
    for(ll i=1;i<n;i++)
    {
            if(vec[i]<=vec[i-1])
            {
                ll p=(vec[i-1]-vec[i]+1);
                ans+=p;
                vec[i]=vec[i-1]+1;
            }
    }
    cout<<ans<<endl;
}
