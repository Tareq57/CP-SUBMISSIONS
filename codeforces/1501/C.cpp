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
        ll n;
        cin>>n;
        ll ara[n+5];
        ll a[5000001],b[5000001];
        for(ll i=0;i<n;i++)cin>>ara[i];
        for(ll i=0;i<=5000000;i++){a[i]=-1;b[i]=-1;}
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
               ll sum=ara[i]+ara[j];
               if(a[sum]==-1)
               a[sum]=i;
               if(b[sum]==-1)
               b[sum]=j;
              // cout<<i<<" "<<j<<" "<<a[sum]<<" "<<b[sum]<<endl;
               if(a[sum]!=i&&a[sum]!=j&&b[sum]!=i&&b[sum]!=j)
               {
                   cout<<"YES"<<"\n"<<a[sum]+1<<" "<<b[sum]+1<<" "<<i+1<<" "<<j+1<<endl;
                   return 0;
               }
            }
        }
        cout<<"NO"<<endl;  
}
 