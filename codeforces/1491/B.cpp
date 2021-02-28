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
#define inf 1e13
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
        ll n,u,v;
        cin>>n>>u>>v;
        vll vec;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
        }
        bool ok=true;
        ll ans=0;
        if(vec[0]==1&&vec[1]==0&&n==2)
        {
            ans=min(u,v);
        }
        else if(vec[0]==vec[1]&&n==2)
        {
            ans=min(u+v,v*2);
            cout<<ans<<endl;
            continue;
        }
        if(vec[n-1]==1000000&&vec[n-2]==1000001)
        {
            ans+=(u,v);
            cout<<ans<<endl;
        }
        else
        {
            ll p=minf;
            for(ll i=1;i<n;i++)
            {
                p=max(p,abs(vec[i]-vec[i-1]));
                
            }
            if(ok)
            {
                if(p==0)
                {
                    ans=min(u+v,v*2);
                }
                else if(p==1)
                {
                    ans=min(u,v);
                }
            }
            cout<<ans<<endl;

        }



        
    }
    
}
 