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
    ll n;
    cin>>n;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;cin>>num;vec.pb(num);
    }
    if(n==1)
    {
        cout<<1<<" "<<1<<endl<<0<<endl<<1<<" "<<1<<endl<<0<<endl<<1<<" "<<1<<endl<<-vec[0]<<endl;
    }
    else
    {
        cout<<2<<" "<<n<<endl;
        for(ll i=1;i<n;i++)
        {
            cout<<(n-1)*(vec[i]%n)<<" ";
            vec[i]+=((n-1)*(vec[i]%n));
        }
        cout<<endl<<1<<" "<<n<<endl<<0<<" ";
        for(ll i=1;i<n;i++)
            cout<<-vec[i]<<" ";
        cout<<endl<<1<<" "<<1<<endl<<-vec[0]<<endl;
    }
}



