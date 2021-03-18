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
        ll n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        ll p=min(k1,k2);
        p+=((max(k1,k2)-min(k1,k2))/2);
        ll q=min(n-k1,n-k2);
        q+=((max(n-k1,n-k2)-min(n-k1,n-k2))/2);
        if(p>=w&&q>=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }  
}
 