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
        vll vec(n+2);
        for(ll i=0;i<n+2;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        ll let_sum=vec[n],sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=vec[i];
        }
        if(sum==let_sum)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            let_sum=vec[n+1];
            ll pos=-1;
            for(ll i=0;i<=n;i++)
            {
                if(sum-vec[i]+vec[n]==let_sum)
                {
                    pos=i;
                    break;
                }   
            }
            if(pos==-1)
            {
                cout<<pos<<endl;
            }
            else
            {
                for(ll i=0;i<=n;i++)
                {
                    if(i==pos)
                    continue;
                    cout<<vec[i]<<" ";
                }
                cout<<endl;
            }
        }

    }
}
 