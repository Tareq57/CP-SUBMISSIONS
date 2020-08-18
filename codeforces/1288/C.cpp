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
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
   fastio
   ll n,m;
   cin>>n>>m;
   ll p=n+(2*m)-1;
   ll q=2*m;
   ll ara[p+1]={0};
   ara[0]=1;
   for(ll i=1;i<=p;i++)
       for(ll j=min(i,p);j>0;j--)
           ara[j]=(ara[j-1]+ara[j])%mod;
   cout<<ara[q]<<endl;
}

