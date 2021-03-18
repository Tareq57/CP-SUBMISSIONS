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
#define inf 1e15
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
        ll cost=inf,odd=0,even=0,odd_min=inf,even_min=inf;
        for(ll i=1;i<=n;i++)
        {
            ll num;
            cin>>num;
            if(i&1)
            {
                odd+=num;
                odd_min=min(num,odd_min);
            }
            else
            {
                even+=num;
                even_min=min(num,even_min);
            }
            if(i>1)
            {
               ll p=(i+1)/2;
               ll q=i/2;
                cost=min(cost,odd+even+(n-p)*odd_min+(n-q)*even_min);
            }
        }
        cout<<cost<<endl;

    }  
}
 