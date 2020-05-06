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
    ll n,t,k,d;
    cin>>n>>t>>k>>d;
    ll ans=0;
    ll m=n;
    while(m>0)
    {
        m-=k;
        ans+=t;
    }
   // cout<<ans<<endl;
     m=n;
    ll ans1=0,q=0;
    while(q<d&&m>0)
    {
        q+=t;
        m-=k;
    }
    if(m>0)
    {
     ans1=d;
    // cout<<ans1<<endl;
     ll p=0;
     while(p<m)
     {
         ans1+=t;
         m-=(2*k);
     }
    // cout<<ans1<<endl;
    }
    else
        ans1=q;
        //cout<<ans1<<endl;
    if(ans1<ans)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
