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
    ll t;
    cin>>t;
    set <ll> s;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            s.insert(num);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
}
