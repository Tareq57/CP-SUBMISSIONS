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
#define mod 1000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
    fastio
    ll n,m;
    cin>>n>>m;
    vll vec,ara;
    for(ll i=0;i<n;i++){ll num;cin>>num;vec.pb(num);}
   // for(ll i=0;i<m;i++){ll num;cin>>num;ara.pb(num);}
   // sort(vec.begin(),vec.end());
   string str;
   cin>>str;
   ll sum=0;
   for(ll i=0;i<n;i++)
   {
       ll cnt=0,j;
       for(j=i;j<n;j++)
       {
           if(str[j]!=str[i])
            break;
           cnt++;
       }
       ll p=0;
       sort(vec.begin()+i,vec.begin()+i+cnt);
       for(ll k=i;k<j;k++)
       {
           p+=vec[k];
       }
       ll pos=i;
       while((cnt-m)>0)
       {
           p-=vec[pos];
           pos++;
           cnt--;
       }
       sum+=p;
       i=--j;
   }
   cout<<sum<<endl;


}
