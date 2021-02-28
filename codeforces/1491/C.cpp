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
        ll n;
        cin>>n;
        vll vec;
        ll cnt[n+5]={0};
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                cnt[i+1]+=cnt[i];
            }
            else{            
                for(ll j=i+2;j<min(n,i+vec[i]+1);j++)
                {
                    cnt[j]++;
                }
                ll p=vec[i]-1;
                if(cnt[i]>p)
                {
                    cnt[i]-=p;
                    cnt[i+1]+=cnt[i];
                }
                else
                {
                   
                    ans+=(p-cnt[i]);
                }
            }
        }
        cout<<ans<<endl;
    }
}
 