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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll sum=0,add=0;
       sum+=pow(2,n);
       add+=pow(2,n-1);
       n-=2;
       for(ll i=1;i<=n/2;i++)
       {
           sum+=pow(2,i);
       }
       for(ll i=n/2+1;i<=n;i++)
       {
           add+=pow(2,i);
       }
       cout<<sum-add<<endl;
    }
}

