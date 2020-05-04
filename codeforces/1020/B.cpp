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
    ll ara[n];
    vll vec,ans;
    memset(ara,0,sizeof(ara));
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
    for(ll i=0;i<n;i++)
    {
        ll p=vec[i];
        ara[i]++;
        while(1)
        {
            ara[p-1]++;
            if(ara[p-1]==2)
            {
                ans.pb(p);
                memset(ara,0,sizeof(ara));
                break;
            }
            else
            {
                p=vec[p-1];
            }
        }
    }
    for(auto x: ans)
    {
        cout<<x<<" ";
    }

}
