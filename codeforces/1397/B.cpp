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
    ll n,ans=0;
    cin>>n;
    vll vec;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
        ans+=(abs(num-1));
    }
    sort(vec.begin(),vec.end());
    double st=18.0/(double)n;
    double start=pow(10.0,st);
    for(ll i=1;i<=(ll)start;i++)
    {
        ll p=1,cnt=0;
        for(ll j=0;j<n;j++)
        {
            if(j!=0)
            p*=i;
            ll k=abs(vec[j]-p);
            cnt+=k;
            //cout<<k<<endl;
        }
        ans=min(ans,cnt);

    }
    printf("%lld\n",ans);
}



