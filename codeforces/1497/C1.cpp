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
void print(ll n)
{
    if(n%2)
    {
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    }
    else
    {
        if(n%4==0)
        {
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }
        else
        {
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
    }
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if((n-k+2)%2)
        {
            for(ll i=0;i<k-3;i++)
            {
                cout<<1<<" ";
                n--;
            }
            print(n);
        }
        else
        {
            for(ll i=1;i<=k-2;i++)
            {
                cout<<1<<" ";
            }
            cout<<(n-k+2)/2<<" "<<(n-k+2)/2<<endl;
        }
    }  
}
 