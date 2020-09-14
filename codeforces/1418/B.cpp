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
        vll vec,boo;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
        }
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;boo.pb(num);
        }

        vll ara,res;
        for(ll i=0;i<n;i++)
        {
            res.pb(0);
        }
      //  for(auto x:boo)cout<<x<<" ";
        for(ll i=0;i<n;i++)
        {
            if(boo[i]==0)ara.pb(vec[i]);
            else res[i]=vec[i];
        }
        sort(ara.begin(),ara.end());
        ll p=ara.size()-1;
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(boo[i]==1)
            {
                cnt+=vec[i];
            }
            else
            {
                cnt+=ara[p];
                res[i]=ara[p];
                p--;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;


    }
}
