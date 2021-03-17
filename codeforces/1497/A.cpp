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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll vec;
        ll ara[101]={0};
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
            ara[num]++;
        }
        ll cnt=0;
        while(cnt<n)
        {
            for(ll i=0;i<=100;i++)
            {
                if(ara[i]>0)
                {
                    cout<<i<<" ";
                    ara[i]--;
                    cnt++;
                }
            }
        }
        cout<<endl;
        
    }  
}
 