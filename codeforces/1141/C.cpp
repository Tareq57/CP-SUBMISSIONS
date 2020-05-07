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
int main()
{
    ll n;
    cin>>n;
    vll vec;
    ll num;
    cin>>num;
    vec.pb(num);
   // cout<<vec[0]<<endl;
    for(ll i=1;i<n-1;i++)
    {
        cin>>num;
        vec.pb(num+vec[i-1]);
       // cout<<vec[i]<<endl;
    }
    ll p=(n*(n+1))/2;
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        sum+=vec[i];
    }
    //cout<<sum<<endl;
    ll q=(p-sum)/n;
    if(q<=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if((q*n)!=(p-sum))
    {
        cout<<-1<<endl;
        return 0;
    }
    vll ans;
    ans.pb(q);
    for(ll i=0;i<n-1;i++)
    {
        ans.pb(q+vec[i]);
    }
    vll res;
    for(ll i=0;i<n;i++)
    {
        res.pb(ans[i]);
    }
    sort(res.begin(),res.end());
    for(ll i=0;i<n;i++)
    {
        if(res[i]!=i+1)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    for(auto x:ans)
    {
        cout<<x<<" ";
    }


}
