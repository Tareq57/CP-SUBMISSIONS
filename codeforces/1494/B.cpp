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
        ll n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        bool ok=true;
        if(u==n)if(l<1||r<1)ok=false;
        if(d==n)if(l<1||r<1)ok=false; 
        if(u==n-1)if(l+r==0)ok=false;
        if(d==n-1)if(l+r==0)ok=false;
        if(l==n)if(u<1||d<1)ok=false;
        if(r==n)if(u<1||d<1)ok=false; 
        if(l==n-1)if(u+d==0)ok=false;
        if(r==n-1)if(u+d==0)ok=false;
        if(u==n&&d==n)if(l<2||r<2)ok=false;
        if(l==n&&r==n)if(u<2||d<2)ok=false;
        if(u+d==2*n-1)if(max(l,r)<2||l+r<3)ok=false;
        if(l+r==2*n-1)if(max(u,d)<2||u+d<3)ok=false;
        if(u==n-1&&d==n-1)if(max(l,r)<2&&min(l,r)==0)ok=false;
        if(l==n-1&&r==n-1)if(max(u,d)<2&&min(u,d)==0)ok=false;
        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;     
    }
}
 