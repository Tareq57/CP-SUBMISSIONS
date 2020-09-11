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
#define minf -1e10
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
        ll cnt0=0,cnt1=0;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);

        }
        vll res;
        for(ll i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                ll j,cnt=0;
                bool ok=true;
                for(j=i+1;j<n;j++)
                {
                    if(vec[j]==1)
                    {
                        ok=!ok;
                        break;
                    }
                    cnt++;
                }
                if(!ok)
                {
                    res.pb(1);
                }
                for(ll k=1;k<cnt;k++)
                        res.pb(0);
                    if(cnt%2==0&&cnt>0)res.pb(0);
                    if(!ok)res.pb(1);
                    i=j;
                    if(i==n&&cnt==1)
                    {
                        res.pb(0);
                        break;
                    }

            }
            else
                {
                ll j,cnt=0;
                bool ok=true;
                for(j=i+1;j<n;j++)
                {
                    if(vec[j]==0)
                    {
                        ok=!ok;
                        break;
                    }
                    cnt++;
                }
                if(!ok)
                {
                    res.pb(0);
                }
                for(ll k=1;k<cnt;k++)
                        res.pb(1);
                    if(cnt%2==0&&cnt>0)res.pb(1);
                    if(!ok)res.pb(0);
                    i=j;
                    if(i==n and cnt==1)
                    {
                        res.pb(0);
                        break;
                    }

            }


        }
        cout<<res.size()<<endl;
        for(auto x:res)cout<<x<<" ";
        cout<<endl;

    }
}
