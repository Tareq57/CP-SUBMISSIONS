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
ll a[101],b[101],tc[101];
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
       for(ll i=1;i<=n;i++)
       {
           cin>>a[i];
           cin>>b[i];
       }
       for(ll i=1;i<=n;i++)cin>>tc[i];
       ll sum=0;
       for(ll i=1;i<=n;i++)
       {
           ll p=a[i]-b[i-1]+tc[i];
           sum+=p;
          // cout<<sum<<endl;
           if(i<n){
           sum+=(ceil(b[i]-a[i],2));
           sum=max(b[i],sum);
           }
           //cout<<sum<<" "<<a[i]-b[i-1]+tc[i]<<endl;;
       }
       cout<<sum<<endl;
    }  
}
 