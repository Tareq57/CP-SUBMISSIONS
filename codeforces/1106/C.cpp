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
    vll ans;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    sort(vec.begin(),vec.end());
    ll p=n-1;
    for(ll i=0;i<n/2;i++)
    {
        ans.pb(vec[i]+vec[p]);
        p--;
    }
    ll res=0;
    for(ll i=0;i<n/2;i++)
    {
        res+=(ans[i]*ans[i]);
    }
    cout<<res<<endl;

}

