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
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vll vec;
        map<ll,ll>mapp;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            if(!mapp[num])
            {
                  vec.pb(!mapp[k-num]);
                  mapp[num]=!mapp[k-num];
            }

            else
            {
                if(num!=k-num)
                vec.pb(mapp[num]);
                else
                {
                    vec.pb(!mapp[k-num]);
                  mapp[num]=!mapp[k-num];
                }
            }
            //cout<<0<<endl;
        }
        for(auto x:vec)
            cout<<x<<" ";
        cout<<endl;
    }
}
