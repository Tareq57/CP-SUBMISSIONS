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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll p=a-x;
        ll q=b-y;
        ll ans=1000000000000000000;
        if(p>n)
        {
            ans=min(ans,b*(a-n));
            if(q>n)
            {
                ans=min(ans,a*(b-n));

            }
            else
            {
                ll r=n-q;
                r=min(r,p);
                ans=min(ans,(a-r)*(b-q));
            }
        }
        else
        {
            ll r=n-p;
            r=min(r,q);
            ans=min(ans,(a-p)*(b-r));
            if(q>n)
            {
                ans=min(ans,a*(b-n));

            }
            else
            {
                ll r=n-q;
                r=min(r,p);
                ans=min(ans,(a-r)*(b-q));
            }
        }
        cout<<ans<<endl;



    }
}
