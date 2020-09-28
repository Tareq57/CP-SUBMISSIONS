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
        ll n,m;
        cin>>n>>m;
        bool ok=false;
        while(n--)
        {
            ll x1,x2,y1,y2;
            cin>>x1>>x2>>y1>>y2;
            if(x2==y1)
            {
                ok=true;
            }
        }
        if(ok&&m%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
